#include "Spacecraft.h"
#include <iostream>
#include "sstream"
using namespace std;


/**
 * @brief Construct a new Spacecraft:: Spacecraft object
 * 		  & sets number of times used to 0 and sets default location to Earth
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
 Spacecraft::Spacecraft() {
	reused = 0;
	setCurrentLocation("Earth");
}


/**
 * @brief Set the location of the spacecraft
 * 
 * @param location :- current location
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Spacecraft::setCurrentLocation(string location) {
	this->currentLocation = location;
}


/**
 * @brief Returns the currents location of the spacecraft
 * 
 * @return string :-currentLocation
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
string Spacecraft::getCurrentLocation() {
	return this->currentLocation;
}


/**
 * @brief Sets the destination of the destination
 * 
 * @param destination :-destination of the spacecraft
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Spacecraft::setDestination(string destination) {
	this->destination = destination;
}


/**
 * @brief Returns weight payload
 * 
 * @return double :-maxWeightToOrbit
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
double Spacecraft::getWeightToOrbit() {
	return maxWeightToEarth;
}


/**
 * @brief Sets the weight of the crew members plus the cargo
 * 
 * @param weight :-max Weight
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Spacecraft::setWeightToOrbit(double weight) {
	this->maxWeightToOrbit=weight;
}


/**
 * @brief Gets weight of paylaod
 * 
 * @return double :-maxWeightToEarth
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
double Spacecraft::getWeightToEarth() {
	return this->maxWeightToEarth;
}

/**
 * @brief Prints the Journey checkpoints
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
void Spacecraft::goToDestination(){
	std::cout
		<< "\n\n\t"
		<< "SPACECRAFT CHECKPOINTS\n"
		<< "\t\tFROM: "
		<< this->currentLocation
		<< "\n\t\tTO: "
		<< this->destination
		<< "\n\n\t\t\tProgress: [";

	for(int i=0; i<5;i++){
		std::cout << "=" <<((i+1)/5)*100 << "%";
		sleep(1);
	}

	std::cout << "]"  << " Complete\n" << std::endl;
	setCurrentLocation(destination);
}


/**
 * @brief Updates the observer class about the height of spacecraft the deployment of the parachute
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Spacecraft::notify() {
	for(int i=0;i<observerList.size();i++){
		if(observerList[i] !=NULL)
			observerList[i]->update();
	}
}

/**
 * @brief Attaches a parachute system observer to the parachute observer list
 * 
 * @param obj :- Observer to be attached
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Spacecraft::attach(ParachuteSystemObserver* obj) {
	observerList.push_back(obj);
}


/**
 * @brief Detaches a parachute system observer from the parachute observer list
 * 
 * @param obj -: Observer to be detached
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Spacecraft::detach(ParachuteSystemObserver* obj){
	int index=0;
	for(int i=0;i<observerList.size();i++){
		if(observerList[i] !=NULL)
			if(observerList[i]==obj)
				index=i;
	}

	//erase the ith element
    observerList.erase(observerList.begin()+index);
}


/**
 * @brief Attaches a cargo object to the cargo list and prints confirmation
 * 
 * @param obj :- Cargo to be added
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Spacecraft::attachCargo(Cargo* obj) {
	cargoList.push_back(obj);

	std::cout
		<< "\t"
		<< "ADDED:\n"
		<< "\t\t" << obj->getName() << "\n"
		<< std::endl;
}


/**
 * @brief Removes cargo from the spacecraft by index
 * 
 * @param index :- index
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Spacecraft::detachCargo(int index) {
	cargoList.erase(cargoList.begin()+index);
}

//@brief confirms the safe return of the spacecraft and increases the number of times the spacecraft has been used

/**
 * @brief Applaud
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
void Spacecraft::missionComplete() {
	
	std::cout
		<< "\n\n\n"
		<< std::string(70,'=')
		<< "\t\t\tMISSION COMPLETE\n"
		<< std::string(70,'=')
		<< std::endl;

	reused++;
}


/**
 * @brief Attaches a thruster to the thrusters list
 * 
 * @param thruster :-thruster to be attached
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Spacecraft::attachThruster(Thruster* thruster){
	this->thrustersList.push_back(thruster);
}


/**
 * @brief  Removes all the the thrusters in the thrusters list vector
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Spacecraft::detachThruster(){
	thrustersList.clear();
}


/**
 * @brief refer to concreteClasses
 * 
 * @return double :-height of rocket
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
double Spacecraft::getCurrentHeight(){
	return 0;
}

/**
 * @brief refer to concreteClasses
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Spacecraft::setCurrentHeight(double currtHight){
	
}


/**
 * @brief Prints Cargo Info
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
void Spacecraft::print(){

	//Crew Info
	crewInfo();

	int i = 0;
	double w = 0;

	sleep(1);

	//Cargo Info
	std::cout
		<< "\t"
		<< "CARGO:"
		<< std::endl;

	for(Cargo* item: cargoList){
		std::cout
			<< "\t\t" << i + 1 << ". "
			<< item->getName() << " | "
			<< item->getWeight() << std::endl; 

		w +=item->getWeight();
		i++;
	}
	
	std::cout
		<< "\n\tTOTAL WEIGHT ACCUMULATED: " << w << " Kg\n"
		<< std::endl;


	sleep(1);

	//Parachute Info
	std::cout
		<< "\t"
		<< "PARACHUTES:"
		<< std::endl;

	i = 0;

	for(Parachute* item: parachuteList){
		std::cout
			<< "\t\t" << i + 1 << ". "
			<< item->getId() << std::endl;

		parachuteChecker=item->GetMark2isCreatedChecker();
		i++;
	}

	sleep(1);

	//Thruster Info
	std::cout
		<< "\n\t"
		<< "THRUSTERS:"
		<< std::endl;
	
	i = 0;

	for(Thruster* item: thrustersList){
		std::cout
			<< "\t\t" << i + 1 << ". "
			<< item->getId() << " | " << item->getPower() << " unit_force"
			<< std::endl;

		ThrusterChecker=item->GetDracoisCreatedChecker();
		i++;
	}

	std::cout
		<< "\n\tTOTAL POWER ACCUMULATED: " << TotalPowerOfThrusters() << " unit_force\n"
		<< std::endl;

	std::cout << std::endl << "\t\t\tCOMPLETE\n\n" << std::endl;
	sleep(2);
}

/**
 * @brief Attaches a parachute pointer to the cargo list and prints confirmation
 * 
 * @param parachute :-parachute to be attached
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Spacecraft::attachParachute(Parachute* parachute){
	parachuteList.push_back(parachute);

	std::cout
		<< "\n\tPARACHUTE: " << parachute->getId()
		<< "\n\t\tADDED\n"
		<< std::endl;
}


/**
 * @brief Removes all the the parachutes in the parachute list vector
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
void Spacecraft::detachParachute(){
	parachuteList.clear();
}


/**
 * @brief Calculates the Accumulated power by summing up thruster power of
 * 		  the currently attached thrusters
 * 
 * @return double :-sum
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
double Spacecraft::TotalPowerOfThrusters(){
	double sum=0;
	for(Thruster* item: thrustersList){
		sum+=item->getPower();
	}
	return sum;
}


/**
 * @brief refer to concreteClasses
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
void Spacecraft::crewInfo(){
	
}

/**
 * @brief refer to concreteClasses
 * 
 * @return int 
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
int Spacecraft::getTotalNumCrewMember()
{
	return 0;
}


/**
 * @brief Check if all conditions for the spacecraft to lift off are met
 * 
 * @return true :-if(all_pass)
 * @return false :-if(not_all_pass)
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
bool Spacecraft::IsSpcacecraftInOptimum(){


	//Spacecraft
	std::cout
		<< "\n\tFINAL CHECK"
		<< std::endl;


	int isOptimum=0;

	sleep(2);

	//Parachute
	for(Parachute* item: parachuteList){
		parachuteChecker=item->GetMark2isCreatedChecker();	
	}

	std::cout
		<< "\t\tPARACHUTES:"
		<< std::endl;

	if(parachuteChecker==1){ // IF 1 is Mark 3... then pass
		std::cout
			<< "\t\t\tPASS\n"
			<< std::endl;

		isOptimum++;
	} else {
		
		if(getCurrentWeight()<5100 && parachuteChecker==0 ){
			std::cout
				<< "\t\t\tPASS\n"
				<< std::endl;

			isOptimum++;
		} else {
			std::cout
				<< "\t\t\tFAIL\n"
				<< "\t\tMESSAGE:"
				<< "\n\t\t\tMark_2 is not compatible with load weight(mass) of +85 percent spacecraft capacity\n"
				<< "\t\tRECOMMENDATION:"
				<< "\n\t\t\tReduce load weight(mass) to at most 5100Kg or Use Mark_3\n"
				<< std::endl;
		}
	}

	sleep(2);

	std::cout
		<< "\t\tTotal Weight(mass) Check:"
		<< std::endl;

	if(getCurrentWeight()<6000){
		std::cout
			<< "\t\t\tPASS\n"
			<< std::endl;

		isOptimum++;
	} else {
		std::cout
			<< "\t\t\tFAIL\n"
			<< "\t\tMESSAGE:"
			<< "\n\t\t\tSpacecraft is not compatible with load weight(mass) of +6000Kg\n"
			<< "\t\tRECOMMENDATION:"
			<< "\n\t\t\tReduce load weight(mass) to at most 6000Kg\n"
			<< std::endl;
	}

	sleep(2);

	std::cout
		<< "\t\tReusability:"
		<< std::endl;

	if(reused<=5){
		std::cout
			<< "\t\t\tPASS\n"
			<< std::endl;

		isOptimum++;
	} else {
		std::cout
			<< "\t\t\tFAIL\n"
			<< "\t\tMESSAGE:"
			<< "\n\t\t\tSpacecraft is not reusable more than 5 times\n"
			<< "\t\tRECOMMENDATION:"
			<< "\n\t\t\tRefurbish or Use a new one\n"
			<< std::endl;
	}

	sleep(2);

	std::cout
		<< "\t\tThruster Power:"
		<< std::endl;

	if(ThrusterChecker==1 && getCurrentWeight()<=6000){
		std::cout
			<< "\t\t\tPASS\n"
			<< std::endl;

		isOptimum++;
	}else if(ThrusterChecker==1 && getCurrentWeight()>6000){
		std::cout
			<< "\t\t\tFAIL\n"
			<< "\t\tMESSAGE:"
			<< "\n\t\t\tSuperDrago Thruster does NOT support weight(mass) greater than 6000Kg\n"
			<< "\t\tRECOMMENDATION:"
			<< "\n\t\t\tReduce weight(mass) of the load\n"
			<< std::endl;
	} else {
		if(getCurrentWeight()<5100){
			std::cout
				<< "\t\t\tPASS\n"
				<< std::endl;

			isOptimum++;
		} else {
			std::cout
				<< "\t\t\tFAIL\n"
				<< "\t\tMESSAGE:"
				<< "\n\t\t\tDraco Thrusters is not compatible with load weight(mass) of +85 percent spacecraft capacity\n"
				<< "\t\tRECOMMENDATION:"
				<< "\n\t\t\tReduce weight(mass) of the load or Use SuperDraco Thrusters\n"
				<< std::endl;
		}
	}

	sleep(2);

	if(isCrewDragon()==true)
	{
		std::cout
			<< "\tTYPE:	"
			<< "CrewDragon Spacecraft\n"
			<< std::endl;

		std::cout
			<< "\t\tCrew:"
			<< std::endl;

		if(getTotalNumCrewMember()==0){
			std::cout
				<< "\t\t\tFAIL\n"
				<< "\t\tMESSAGE:"
				<< "\n\t\t\tMust have at least one crew member\n"
				<< "\t\tRECOMMENDATION:"
				<< "\n\t\t\tAdd crew members\n"
				<< std::endl;
		} else if(getTotalNumCrewMember()>7){
			std::cout
				<< "\t\t\tFAIL\n"
				<< "\t\tMESSAGE:"
				<< "\n\t\t\tMust have at most 7 crew members\n"
				<< "\t\tRECOMMENDATION:"
				<< "\n\t\t\tRemove crew members\n"
				<< std::endl;
		} else {
			std::cout
				<< "\t\t\tPASS\n"
				<< std::endl;

			isOptimum++;
		}

		sleep(1);
		std::cout 
			<< "\tFINAL CHECK RESULTS\n"
			<< "\t\t\nSpacecraft System and Hardware: ";

		sleep(2);

		if(isOptimum==5){
			std::cout
				<< "OPTIMUM"
				<< "\n\nPLEASE WAIT FOR CONFIGURATION TO COMPLETE"
				<<std::endl;

			sleep(4);
			
			return true;
		}

		std::cout
			<< "NOT OPTIMUM"
			<<std::endl;

		return false;
	}


	std::cout 
		<< "\tFINAL CHECK RESULTS\n"
		<< "\t\t\nSpacecraft System and Hardware: ";

	sleep(2);


	if(isOptimum==4)
	{
		std::cout
			<< "OPTIMUM"
			<< "\n\nPLEASE WAIT FOR CONFIGURATION TO COMPLETE"
			<<std::endl;

		sleep(4);
			
		return true;
	}
	
	std::cout
		<< "NOT OPTIMUM"
		<<std::endl;

	return false;
}


/**
 * @brief Get list of cargo items
 * 
 * @return vector<Cargo*> :-cargoList
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
vector<Cargo*> Spacecraft::getCargoList(){
	return cargoList;
}

/**
 * @brief Refer to concreteClasses
 * 
 * @param a 
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Spacecraft::enterCrewMember(CrewMember* a){

}

/**
 * @brief refer to concreteClasses
 * 
 * @param a 
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Spacecraft::removeCrewMember(int a){

}

/**
 * @brief Get the Crew List object
 * 
 * @return vector<CrewMember*>Spacecraft:: :-empty list of crew members
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
vector<CrewMember*>Spacecraft:: getCrewList(){
	vector<CrewMember*> a;
	return a;
}


/**
 * @brief Checks the type of the spacecraft
 * 
 * @return true :- if(isCrewDragon)
 * @return false :- if(otherwise)
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
bool Spacecraft::isCrewDragon(){
	return IsCrewDragon;
}


/**
 * @brief Sets type of spacecraft
 * 
 * @param IsCrewDragon :-determines if it isCrewDragon
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372) 
 */
void Spacecraft::setIsCrewDragon(bool IsCrewDragon){
	this->IsCrewDragon=IsCrewDragon;
}


/**
 * @brief Returns destination
 * 
 * @return string :-destination
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
string Spacecraft::getDestination(){
	return destination;
}


/**
 * @brief Simulates Launch
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
void Spacecraft::launch(){
	string dest="ISS";
	
	setDestination(dest);

	std::cout
		<< "\n\n\tSPACECRAFT:"
		<< std::endl;

	sleep(1);

	std::cout
		<< "\n\t\tThrusters"
		<< std::endl;

	sleep(1);

	for(Thruster* item: thrustersList){
		item->turnOn();
		std::cout
			<< "\t\t\t"
			<< item->getId() << " | " << "ON\n";
	}

	for(Thruster* item: thrustersList){
		item->fireUp();
	}

	goToDestination();

	double w = 0;
	int i=0;

	sleep(1);

	std::cout
		<< "\n\t\tUnload\n"
		<< "\t\t\t" << theUnloudedloadedStuff << std::endl;


	sleep(4);

	std::cout
		<< "\n\t\tBack_to_Earth"
		<< std::endl;
 
	setDestination("Earth");
		
	sleep(1);

	for(Thruster* item: thrustersList){
		item->turnOn();
		std::cout
			<< "\t\t\t"
			<< item->getId() << " | " << "ON\n";
	}

	for(Thruster* item: thrustersList){
		item->fireUp();
	}

	goToDestination();

	sleep(5);

	std::cout
		<< "\n\t\tENTERING EARTH UPPER ATMOSPHERE\n";


	double Thecurrent_Height =160;

	while(Thecurrent_Height>0){
		if(Thecurrent_Height <=6 && Thecurrent_Height>3){
			std::cout
				<< "\n\t\t\tDeploy Parachutes\n"
				<< std::endl;

			i=0;

			for(Parachute* item: parachuteList){
				item->deploy();
				std::cout<<endl;
				sleep(1);
				i++;
			}
			break;
		}
		else
			sleep(1);

		Thecurrent_Height-=19.25;
	}

	missionComplete();
}


/**
 * @brief Removes the cargo when reaching the destination and preparing to go back to earth
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Spacecraft::Unloading(){
	if(isCrewDragon()==true)
	{
		std::cout
			<< "\nTYPE OF SPACECRAFT: \n\tCrewDragon" << std::endl;

		std::cout
			<< "\n\tConfirm Unload Options at ISS"
			<< std::endl;


		while(getCurrentWeight()){
			std::cout
				<< "\t\tUnload Options: "
				<< "\n\t\t\t1. Cargo"
				<< "\n\t\t\t2. Crew Member"
				<< "\n\t\t\t\tInput> ";


			int optionR;
			string strInput = "";

			while (true){
				getline(cin, strInput);
				stringstream myStream(strInput);
				if ( (myStream >> optionR) ){
					if(optionR >=1 && optionR<=2 ){
						break;
					} else
						std::cout
							<< "\n\t\t\t !!! Invalid Input !!! \n"
							<< "\t\t\t Let's go one more time...\n"
							<< std::endl;
				}	
			} 

			if(optionR== 1){
				std::cout
					<< "\n\t\tCargo Info"
					<< std::endl;

				while (getCurrentWeight()){
					
					double w = 0;
					int i=0;

					for(CrewMember* item: getCrewList()){
						w += item->getWeight();
					}

					for(Cargo* item: getCargoList()){
						std::cout
							<< "\t\t\t" << i + 1 << ". "
							<< item->getName() << " | " << item->getWeight() << "Kg"
							<< std::endl;

						w += item->getWeight();
						i++;
					}
					
					
					std::cout
						<< "\t\tTOTAL WEIGHT OF SPACECRAFT: "
						<< w
						<< "Kg"
						<< std::endl << std::endl;

					int cCargoIndex;

					std::cout
						<< "\t\tChoose cargo to unload at ISS by index ref\'ed by above list\n"
						<< "\t\t\tInput > ";

					string strInput = "";
					
					while (true){
						getline(cin, strInput);
						stringstream myStream(strInput);
						if ( (myStream >> cCargoIndex) ){
							if(cCargoIndex >=1 && cCargoIndex<=getCargoList().size())
								break;
							else
								std::cout
									<< "\n\t\t\t !!! Invalid Input !!! \n"
									<< "\t\t\t Let's go one more time...\n"
									<< "\n\t\t\tInput > ";
						}
					} 

					string cargoName;
					int c=0;
					for(Cargo* item: getCargoList()){
						if(item != NULL){
							if(cCargoIndex==c+1)
								cargoName+=to_string(c)+". "+item->getName()+" weight: "+to_string(item->getWeight()).substr(0,5)+" Kg";
							c++;
						}
					}

					detachCargo(cCargoIndex);
					theUnloudedloadedStuff+=" UNLOADING: "+cargoName+" ";

					int doneRCargo;
					std::cout
						<<"\n\t\tContinue unload? (0:No | 1:Yes)"
						<<std::endl;

					strInput = "";

					while (true){
						getline(cin, strInput);
						stringstream myStream(strInput);
						if ( (myStream >> doneRCargo) ){
							if(doneRCargo >=0 && doneRCargo<=1 )
								break;
							else
								std::cout
									<< "\n\t\t\t !!! Invalid Input !!! \n"
									<< "\t\t\t Let's go one more time...\n"
									<< "\n\t\t\tInput > ";
						}
					}

					if(doneRCargo==0){
						break;
					}		
				}
			} else {
				std::cout
					<< "\n\t\tCrew Info"
					<< std::endl;

				while(getCurrentWeight()){
					int i=0;
					double w=0;

					for(CrewMember* item: getCrewList()){
						std::cout
							<< "\t\t\t" << i + 1 << ". "
							<< item->getName() << " | " << item->getWeight() << " Kg"
							<< std::endl;

						w += item->getWeight();
						i++;
					}
					
					for(Cargo* item: getCargoList()){
						w += item->getWeight();
					}
					
					std::cout
						<< "\t\tTOTAL WEIGHT OF SPACECRAFT: "
						<< w
						<< "Kg"
						<< std::endl << std::endl;

					int memberIndex;

					crewInfo();

					std::cout
						<< "\t\tChoose crew member to unload at ISS by index ref\'ed by above list\n"
						<< "\t\t\tInput > ";

					string strInput = "";

					while (true){
						getline(cin, strInput);
						stringstream myStream(strInput);
						if ( (myStream >> memberIndex) ){
							if(memberIndex >=1 && memberIndex<=getCrewList().size() )
								break;
							else
								std::cout
									<< "\n\t\t\t !!! Invalid Input !!! \n"
									<< "\t\t\t Let's go one more time...\n"
									<< "\n\t\t\tInput > ";
						}
					} 

					string CrewName;
					int c=0;
					
					for(CrewMember* item: getCrewList()){
						if(memberIndex==c)
						{
							CrewName+=to_string(c)+". "+item->getName()+" weight: "+to_string(item->getWeight()).substr(0,4)+" Kg";
						}
						c++;
					}

					theUnloudedloadedStuff+=" unloading: "+CrewName+"	";
					removeCrewMember(memberIndex);
					crewInfo();	

					int donemember;
					std::cout
						<<"\n\t\tContinue unload? (0:No | 1:Yes)"
						<<std::endl;

					strInput = "";

					while (true){
						getline(cin, strInput);
						stringstream myStream(strInput);
						if ( (myStream >> donemember) ){
								if(donemember >=0 && donemember<=1 ){
									break;
								}
								else
									std::cout
										<< "\n\t\t\t !!! Invalid Input !!! \n"
										<< "\t\t\t Let's go one more time...\n"
										<< "\n\t\t\tInput > "
										<< std::endl;
							}
					}

					if(donemember==0){
						break;
					}
				}
			}
				
			cout<<"Are you done unloading (0:No 1:Yes)"<<endl;
			int yes;
			strInput = "";
			
			std::cout
				<< "\n\t\tContinue unloading (0:No | 1:Yes)"
				<< "\t\t\tInput > ";

			while (true){
				getline(cin, strInput);
				stringstream myStream(strInput);
				if ( (myStream >> yes) ){
					if(yes >=0 && yes<=1 )
						break;
					else
						std::cout
							<< "\n\t\t\t !!! Invalid Input !!! \n"
							<< "\t\t\t Let's go one more time...\n"
							<< "\n\t\t\tInput > ";
				}
			}

			if(yes == 1){
				if(getCurrentWeight()>800)
					std::cout
						<< "\n\tThe current weight is not compatible for the journey to earth"
						<< "\n\tRecommendations are to continue unloading"
						<< std::endl;
				else
					break;
			}
		}
	}
	else
	{
		std::cout
			<< "\nTYPE OF SPACECRAFT: \n\tCrewDragon" << std::endl;

		std::cout
			<< "\n\tConfirm Unload Options at ISS"
			<< std::endl;

		while(getCurrentWeight()){
			double w = 0;
			int i=0;

			for(Cargo* item: getCargoList()){
				std::cout
					<< "\t\t\t" << i + 1 << ". "
					<< item->getName() << " | " << item->getWeight() << "Kg"
					<< std::endl;

				w += item->getWeight();
				i++;
			}
					
			std::cout
				<< "\t\tTOTAL WEIGHT OF SPACECRAFT: "
				<< w
				<< "Kg"
				<< std::endl << std::endl;


			int cCargoIndex;
			
			std::cout
				<< "\t\tChoose cargo to unload at ISS by index ref\'ed by above list\n"
				<< "\t\t\tInput > ";

			string strInput = "";

			while (true){
				getline(cin, strInput);
				stringstream myStream(strInput);
				if ( (myStream >> cCargoIndex) ){
					if(cCargoIndex >=1 && cCargoIndex<=getCrewList().size() )
						break;
					else
						std::cout
							<< "\n\t\t\t !!! Invalid Input !!! \n"
							<< "\t\t\t Let's go one more time...\n"
							<< "\n\t\t\tInput > ";
				}
			}

			string cargoName;
			int c=0;

			for(Cargo* item: getCargoList()){
				if(cCargoIndex==c)
				{
					cargoName +=to_string(c)+". "+item->getName()+" weight: "+to_string(item->getWeight()).substr(0,5)+" Kg";
				}
				c++;
			}

			detachCargo(cCargoIndex-1);

			theUnloudedloadedStuff+=" unloading: "+cargoName+"	";

			int doneRCargo;

			std::cout
				<< "\n\tContinue unloading (0:No | 1:Yes)"
				<< "\n\t\tInput > ";

			strInput = "";

			while (true){
				getline(cin, strInput);
				stringstream myStream(strInput);
				if ( (myStream >> doneRCargo) ){
					if(doneRCargo >=0 && doneRCargo<=1 )
						break;
					else
						std::cout
							<< "\n\t\t\t !!! Invalid Input !!! \n"
							<< "\t\t\t Let's go one more time...\n"
							<< "\n\t\t\tInput > ";
				}
			}  

			if(doneRCargo==0){
				break;
			}
		}
	}
}


/**
 * @brief FINAL EDIT CREDITS
 * 
 * @author Malope Elphus (u20451696)
 * 
 */
