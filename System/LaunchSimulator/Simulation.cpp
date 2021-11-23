#include "Simulation.h"
// #include "TestSatellites.cpp"
#include "sstream"
#include <iostream>

using namespace std;

/**
 * @brief Construct a new Simulation:: Simulation object
 * 
 * @authors Mabunda Thabo (u19116498)
 * 			Malope Elphus (u20451696)
 * 			Musa Mabasa (u18265163)
 * 			Simphiwe Ndlovu (u19027372)
 * 			Awelani Murovhi (u18335412)
 * 			Kudakwashe Chivunga (u19068752)
 * 			Farai Chivunga (u19068710)
 * 
 */
Simulation::Simulation() {
	sats = new TestSatellites();
	spaceC = new TestSpacecraft();
	rkt = new TestRockets();
	_list = 0;
	falconIndex = 0;
	count=0;
}

/**
 * @brief Destroy the Simulation:: Simulation object
 * 
 * @authors Mabunda Thabo (u19116498)
 * 			Malope Elphus (u20451696)
 * 			Musa Mabasa (u18265163)
 * 			Simphiwe Ndlovu (u19027372)
 * 			Awelani Murovhi (u18335412)
 * 			Kudakwashe Chivunga (u19068752)
 * 			Farai Chivunga (u19068710)
 * 
 */
Simulation::~Simulation() {
 	reset();//clear the simulation before going out of scope
}

/**
 * @brief reset the simulation
 * 
 * @authors Mabunda Thabo (u19116498)
 * 			Malope Elphus (u20451696)
 * 			Musa Mabasa (u18265163)
 * 			Simphiwe Ndlovu (u19027372)
 * 			Awelani Murovhi (u18335412)
 * 			Kudakwashe Chivunga (u19068752)
 * 			Farai Chivunga (u19068710)
 * 
 */
void Simulation::reset()
{
	delete sats;
	delete spaceC;
	delete rkt;

	falconIndex = 0;
	satellites.clear();
	spacecrafts.clear();
	falcons.clear();
	FinalSimulations.clear();
}

/**
 * @brief update falcons
 * 
 * @authors Mabunda Thabo (u19116498)
 * 			Malope Elphus (u20451696)
 * 			Musa Mabasa (u18265163)
 * 			Simphiwe Ndlovu (u19027372)
 * 			Awelani Murovhi (u18335412)
 * 			Kudakwashe Chivunga (u19068752)
 * 			Farai Chivunga (u19068710)
 * 
 */
void Simulation::updateFalcon_ONCE()
{
	vector<Rocket*> temp = rkt->testRockets();
	this->falcons.push_back(temp.at(count++)); 
	this->falcons.push_back(temp.at(count++));
}

/**
 * @brief Test Simulation
 * 
 * @authors Mabunda Thabo (u19116498)
 * 			Malope Elphus (u20451696)
 * 			Musa Mabasa (u18265163)
 * 			Simphiwe Ndlovu (u19027372)
 * 			Awelani Murovhi (u18335412)
 * 			Kudakwashe Chivunga (u19068752)
 * 			Farai Chivunga (u19068710)
 * 
 */
void Simulation::TestSimulation() {

	int OneOrTwo;

	updateFalcon_ONCE();

	cout<<"Select Payload: Starlink Satellites/Dragon Spacecraft? (1/2) : \n";

	std::cout
		<< "\n\tPAYLOAD CONFIRMATION\n"
		<< "\t\t1. Starlink Satellites\n"
		<< "\t\t2. Dragon Spacecraft\n"
		<< "\t\t\tInput > ";

	string strInput = "";
	while (true){
		getline(cin, strInput);
			stringstream myStream(strInput);
		if ( (myStream >> OneOrTwo) ){
			if(OneOrTwo >=1 && OneOrTwo <=2){
				break;
			} else
				std::cout
					<< "\t\t\tInvalid Input\n"
					<< "\n\t\t\tTry Again\n"
					<< "\n\t\t\tInput > ";
		}
	}   

	if(OneOrTwo == 1)
	{
		
		this->satellites  = sats->testSatellites();

		rkt->setTypeRocket("Falcon9");
		
		/**
		*	Since we add two falcons at a time, size()-2 returns Falcon 9
		*/
		falcons.at(falcons.size()-2)->getStageTwo()->attachSatellite(sats);

		FinalSimulations.push_back(falcons.at(falcons.size()-2));

		std::cout
			<< "\n\tTEST COMPLETE\n"
			<< "\n\t\tSUCCESS\n"
			<< std::endl;
	}
	else
	{		
		this->spacecrafts = spaceC->initSpacecraft();
		
		
		rkt->setTypeRocket("Falcon Heavy");
		// rkt->attachSpaceCraft(spacecrafts.at(0));

		/**
		*	Since we add two falcons at a time, size()-1 returns FalconHeavy
		*/
		falcons.at(falcons.size()-1)->getStageTwo()->attachSpacecraft(spacecrafts.at(0));

		FinalSimulations.push_back(falcons.at(falcons.size()-1));

		std::cout
			<< "\n\tTEST COMPLETE\n"
			<< "\n\t\tSUCCESS\n"
			<< std::endl;
	} 
}


/**
 * @brief Launch all
 * 
 * @author Malope Elphus (u20451696)
 * 
 */
void Simulation::Launch() {
	for(int i = _list; i < FinalSimulations.size(); i++, _list++)
		Launch(i);
}


/**
 * @brief Launch
 * 
 * @param k 
 * 
 * @authors Mabunda Thabo (u19116498)
 * 			Malope Elphus (u20451696)
 * 			Musa Mabasa (u18265163)
 * 			Simphiwe Ndlovu (u19027372)
 * 			Awelani Murovhi (u18335412)
 * 			Kudakwashe Chivunga (u19068752)
 * 			Farai Chivunga (u19068710)
 */
void Simulation::Launch(int k) {

	if(k < FinalSimulations.size() && k >= 0)
	{
		std::cout << std::endl << std::endl;
		cout<<"=========================================================================.\n";
        cout<<"                       Actual Simulation: "<< k + 1 << "          \n" ;
		cout<<"==========================================================================\n\n";
		if(FinalSimulations.at(k)->getStageTwo()->HasSatellites()){
				rkt->BeforeLaunch();
				FinalSimulations.at(k)->getStageTwo()->getSatellites()->BeforeLaunch();
				FinalSimulations.at(k)->launch();
				FinalSimulations.at(k)->getStageTwo()->getSatellites()->launch();
			}
		else{
			rkt->BeforeLaunch();
			FinalSimulations.at(k)->launch();
			FinalSimulations.at(k)->getStageTwo()->getSpacecraft()->launch();
		}

		k++;
	}

	if(k > FinalSimulations.size() || k < 0)
	{
		std::cout
			<< "OUT OF BOUNDS\n\tSAVED NUMBER OF SIMULATIONS: " 
			<< FinalSimulations.size()
			<< std::endl;

		return;
	}
}

