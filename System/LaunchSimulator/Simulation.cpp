#include "Simulation.h"
#include "sstream"
#include <iostream>

using namespace std;

Simulation::Simulation() {
	sats = new TestSatellites();
	spaceC = new TestSpacecraft();
	rkt = new TestRockets();
	_list = 0;
	falconIndex = 0;
	count=0;
}

Simulation::~Simulation() {
 	reset();//clear the simulation before going out of scope
}

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

void Simulation::updateFalcon_ONCE()
{
	vector<Rocket*> temp = rkt->testRockets();
	this->falcons.push_back(temp.at(count++)); 
	this->falcons.push_back(temp.at(count++));
}

void Simulation::TestSimulation() {

	int OneOrTwo;

	updateFalcon_ONCE();
	
	std::cout << "falcons address: " << &falcons << std::endl;
	
	std::cout << "Falcon size: "<< falcons.size()<<std::endl;


	cout<<"Select Payload: Starlink Satellites/Dragon Spacecraft? (1/2) : \n";
            string strInput = "";
            while (true){
                getline(cin, strInput);
                 stringstream myStream(strInput);
                if ( (myStream >> OneOrTwo) ){
                        if(OneOrTwo >=1 && OneOrTwo <=2){
                            break;
                        }
						else
                    		cout << "Invalid input, please try again" << endl;
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

		cout<<"\n********Test simulation PASSED and saved to batch.*****************\n";
			
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

		cout<<"\n********Test simulation PASSED and saved to batch.*****************\n";
	} 
}



void Simulation::Launch() {
	for(int i = _list; i < FinalSimulations.size(); i++, _list++)
		Launch(i);
}

void Simulation::Launch(int k) {

	if(k < FinalSimulations.size() && k >= 0)
	{
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

