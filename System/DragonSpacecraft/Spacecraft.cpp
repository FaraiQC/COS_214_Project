#include "Spacecraft.h"
#include <iostream>
#include "sstream"
using namespace std;


/**
 * @brief Construct a new Spacecraft:: Spacecraft object
 * 
 */
 Spacecraft::Spacecraft() {
	reused = 0;
	setCurrentLocation("Earth");
}


/**
 * @brief set the location of the spacecraft
 * 
 * @param location 
 */
void Spacecraft::setCurrentLocation(string location) {
	this->currentLocation = location;
}


/**
 * @brief return the currents location of the spacecraft
 * 
 * @return string 
 */
string Spacecraft::getCurrentLocation() {
	return this->currentLocation;
}


/**
 * @brief sets the destination of the destination
 * 
 * @param destination 
 */
void Spacecraft::setDestination(string destination) {
	this->destination = destination;
}



/**
 * @brief returns the weight carried out of earth
 * 
 * @return double 
 */
double Spacecraft::getWeightToOrbit() {
	return maxWeightToEarth;
}


/**
 * @brief sets the weight of the crew members plus the cargo
 * 
 * @param weight 
 */
void Spacecraft::setWeightToOrbit(double weight) {
	this->maxWeightToOrbit=weight;
}


/**
 * @brief returns the weight carried from outer space to earth
 * 
 * @return double 
 */
double Spacecraft::getWeightToEarth() {
	return this->maxWeightToEarth;
}


/**
 * @brief it prints the spacecraft moving from current location to the destination, after arriving destination becomes the current location
 * 
 */
void Spacecraft::goToDestination() {
	cout<<"\n\n\t\t\tThe spacecraft leaves "<<this->currentLocation<<" to "<<this->destination<<endl<<endl;
	for(int i=0; i<5;i++){
		cout<<"\t\t\t\tHEADING TO "<<destination<<endl;
		sleep(1);
	}
	cout<<"\n\t\t\tThe Spacecraft has arrived at "<<destination<<endl<<endl;
	setCurrentLocation(destination);
}


/**
 * @brief updates the observer class about the height of spacecraft the deployment of the parachute
 * 
 */
void Spacecraft::notify() {
	for(int i=0;i<observerList.size();i++)
	{
		if(observerList[i] !=NULL)
			observerList[i]->update();
	}
}


/**
 * @brief attaches an parachute system observer to the parachute observer list
 * 
 * @param obj 
 */
void Spacecraft::attach(ParachuteSystemObserver* obj) {
	observerList.push_back(obj);
}


/**
 * @brief removes a parachute observer..it searches by a pointer
 * 
 * @param obj 
 */
void Spacecraft::detach(ParachuteSystemObserver* obj) {
	int index=0;
	for(int i=0;i<observerList.size();i++)
	{
		if(observerList[i] !=NULL)
		{
			if(observerList[i]==obj)
			{
				index=i;
			}
		}
	}
	//erase the ith element
    observerList.erase(observerList.begin()+index);
}


/**
 * @brief attaches a cargo pointer to the cargo list and prints confirmation
 * 
 * @param obj 
 */
void Spacecraft::attachCargo(Cargo* obj) {
	cargoList.push_back(obj);
	cout<<obj->getName()<<" has been added to the list"<<endl;
}


/**
 * @brief removes cargo from the spacecraft by index
 * 
 * @param index 
 */
void Spacecraft::detachCargo(int index) {
	cargoList.erase(cargoList.begin()+index);
}


/**
 * @brief confirms the safe return of the spacecraft and increases the number of times the spacecraft has been used
 * 
 */
void Spacecraft::missionComplete() {
	cout<<"\t\t\tThe spacecraft has reached earth, successfully."<<endl<<endl;
	reused++;
}


/**
 * @brief attaches a thruster to the thrusters list
 * 
 * @param thruster 
 */
void Spacecraft::attachThruster(Thruster* thruster){
	this->thrustersList.push_back(thruster);
}


/**
 * @brief removes all the the thrusters in the thrusters list vector
 * 
 */
void Spacecraft::detachThruster(){
	thrustersList.clear();
}


/**
 * @brief returns dummy value 0, virtual function
 * 
 * @return double 
 */
double Spacecraft::getCurrentHeight(){
	return 0;
}


/**
 * @brief virtual function
 * 
 * @param currtHight 
 */
void Spacecraft::setCurrentHeight(double currtHight){
	
}


/**
 * @brief shows all item in the cargo, parachute, hrusters and possibly crew member's vector lists 
 * 
 */
void Spacecraft::print(){
	crewInfo();

	int i = 0;
	double w = 0;
	cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\tCargo Information:"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	for(Cargo* item: cargoList){
		cout<<i<<".item "<<item->getName()<<" weighs "<<item->getWeight()<<endl;
		w +=item->getWeight();
		i++;
	}
	cout<<endl;
	cout<<"The total amount of weight: "<<w<<"Kg"<<endl;
	cout<<endl;

	cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\tParachute Information:"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	i=0;
	for(Parachute* item: parachuteList){
		cout<<i<<". "<<item->getId()<<endl;
		parachuteChecker=item->GetMark2isCreatedChecker();
		i++;
	}
	cout<<endl;

	cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\tThrusters Information:"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	i=0;
	for(Thruster* item: thrustersList){
		cout<<i<<". "<<item->getId()<<"Thruster Power: "<<item->getPower()<<" pounds force"<<endl;
		ThrusterChecker=item->GetDracoisCreatedChecker();
		i++;
	}
	cout<<endl;
	cout<<"Total Thruster Power is: "<<TotalPowerOfThrusters()<<" pounds force"<<endl;
	cout<<endl;
}


/**
 * @brief attaches a parachute pointer to the cargo list and prints confirmation
 * 
 * @param parachute 
 */
void Spacecraft::attachParachute(Parachute* parachute){
	parachuteList.push_back(parachute);
	cout<<parachute->getId()<<" Has been added to the spacecraft"<<endl;
}


/**
 * @brief removes all the the parachutes in the parachute list vector
 * 
 */
void Spacecraft::detachParachute(){
	parachuteList.clear();
}


/**
 * @brief calculates the total power generated by the thrusters all together
 * 
 * @return double 
 */
double Spacecraft::TotalPowerOfThrusters(){
	double sum=0;
	for(Thruster* item: thrustersList){
		sum+=item->getPower();
	}
	return sum;
}


/**
 * @brief virtual function for showing the crew members is spacecraft is crewDragon type
 * 
 */
void Spacecraft::crewInfo(){
	
}


/**
 * @brief virtual funcyion calculates how many crew members boarded the spacecraft
 * 
 * @return int 
 */
int Spacecraft::getTotalNumCrewMember()
{
	return 0;
}


/**
 * @brief check if all conditions for the spacecraft to lift off are met
 * 
 * @return true 
 * @return false 
 */
bool Spacecraft::IsSpcacecraftInOptimum(){
	cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\tChecking if the spacecraft is in optimum."<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	
	int isOptimum=0;
	for(Parachute* item: parachuteList){
		parachuteChecker=item->GetMark2isCreatedChecker();	
	}
	cout<<"Parachute: ";
	if(parachuteChecker==1 ) // IF 1 is Mark 3... then pass
	{
		cout<<"Pass.\n"<<endl;
		isOptimum++;
	}else
	{
		
		if(getCurrentWeight()<5100 && parachuteChecker==0 ) // IF currentWeight is greatorthan 85% ...you must you use Mark3 parachute
		{
			cout<<"Pass."<<endl;
			cout<<endl;
			isOptimum++;
		}
		else{
			cout<<"Failed!"<<endl;
			cout<<" Mark2Parachute will not be able to carry a weight that is greator than 85% of the spacecraft weight!"<<endl;
			cout<<"The solution reduce your weight to be below 5100kg  OR use Mark3Prachute."<<endl;
			cout<<endl;
			}
	}
	

	cout<<"weight carried to Orbit: ";
	if(getCurrentWeight()<6000){
		cout<<"Pass."<<endl;
		cout<<endl;
		isOptimum++;
	}
	else
	{
		cout<<"Failed!"<<endl; 
		cout<<"Spacecraft is unable to carry a weight that is above 6000kg."<<endl;
		cout<<"Solution reduce your weight to be below 6000kg."<<endl;
		cout<<endl;
	}

	cout<<"Spacecraft reusability: ";
	if(reused<=5)
	{
		cout<<"Pass."<<endl;
		cout<<endl;
		isOptimum++;
	}
	else
	{
		cout<<"Failed! Spacecraft can only be reused for 5 time!"<<endl;
		cout<<"Create a new Spacecraft."<<endl;
		cout<<endl;
		
	}

	cout<<"Truster Power: ";
	if(ThrusterChecker==1 && getCurrentWeight()<=6000)
	{
		cout<<"Pass."<<endl;
		cout<<endl;
		isOptimum++;
	}else if(ThrusterChecker==1 && getCurrentWeight()>6000)
	{
		cout<<"Failed! SuperDraco Thrusters can not support weight graitor than 6000k."<<endl;
		cout<<"Solution detach some weight to the spacecraft."<<endl;
		cout<<endl;
	}
	else{
			if(getCurrentWeight()<5100)
			{
				cout<<"Pass."<<endl;
				cout<<endl;
				isOptimum++;
			}
			else
			{
				cout<<"Failed! Draco Thrusters can not support a weight that is greater than 85% of the spacecraft weight!"<<endl;
				cout<<"Solution detach some weight to the spacecraft OR use SuperDraco Thrusters."<<endl;
				cout<<endl;
			}
		}


	if(isCrewDragon()==true)
	{
		cout<<"Number of crew mebers: ";
		if(getTotalNumCrewMember()==0)
		{
			cout<<"Failed! CrewDragon must have atleast one member"<<endl;
			cout<<"Solution please add atleast one crew member."<<endl;
			cout<<endl;
		}
		else if(getTotalNumCrewMember()>7)
		{
			cout<<"Failed! CrewDragon members must not be greater than 7 "<<endl;
			cout<<"Solution please detach atleast one crew member"<<endl;
			cout<<endl;
		}
		else
		{
			cout<<"Pass."<<endl;
			cout<<endl;
			isOptimum++;
		}
		if(isOptimum==5)
		{
			cout<<"\t\t\tSpacecraft is optimum."<<endl;
			return true;
		}
		cout<<"\t\t\tSpacecraft is not optimum."<<endl;
		return false;

	}

	if(isOptimum==4)
	{
		cout<<"\t\t\t!!!!Spacecraft is optimum!!!!\n\n"<<endl;
		return true;
	}
	
		cout<<"\t\t\t!!!!Spacecraft is not optimum!!!!\n\n"<<endl;

	return false;
}


/**
 * @brief returns a vector list of cargo pointers
 * 
 * @return vector<Cargo*> 
 */
vector<Cargo*> Spacecraft::getCargoList(){
	return cargoList;
}


/**
 * @brief virtual fucnction: attaches a  crew member into the spacecraft
 * 
 * @param a 
 */
void Spacecraft::enterCrewMember(CrewMember* a){

}


/**
 * @brief detaches a crew member from the crew member vector list
 * 
 * @param a 
 */
void Spacecraft::removeCrewMember(int a){

}


/**
 * @brief Get the Crew List object
 * 
 * @return vector<CrewMember*>Spacecraft:: 
 */
vector<CrewMember*>Spacecraft:: getCrewList(){
	vector<CrewMember*> a;
	return a;
}


/**
 * @brief check is spacecraft is a crew dragon spacecraft
 * 
 * @return true 
 * @return false 
 */
bool Spacecraft::isCrewDragon(){
	return IsCrewDragon;
}


/**
 * @brief sets the isCrewDragon boolean
 * 
 * @param IsCrewDragon 
 */
void Spacecraft::setIsCrewDragon(bool IsCrewDragon){
	this->IsCrewDragon=IsCrewDragon;
}


/**
 * @brief returns the destination of the spacecraft
 * 
 * @return string 
 */
string Spacecraft::getDestination(){
	return destination;
}


/**
 * @brief simulates the launch of the spacecraft from Earth to the destination then back to earth
 * 
 */
void Spacecraft::launch(){	
	cout<<"Please select the destination of the Spacecraft"<<endl;
	string dest="ISS";
	
	setDestination(dest);
	cout<<"The destination is set from "<<getCurrentLocation()<<"to "<<dest<<endl;
	cout<<"Preparing to turn the thrusters on...."<<endl;
	for(Thruster* item: thrustersList){
		item->turnOn();
		cout<<item->getId()<<" is turned on"<<endl;
		sleep(1);
	}
	cout<<"All the thrusters have been turned on...Ready to go to "<<getDestination()<<endl;

	for(Thruster* item: thrustersList){
		item->turnOn();
		item->fireUp();
	}

	goToDestination();
	double w = 0;
	int i=0;
	cout<<endl;
	cout<<"Now unloading."<<endl;
	cout<<theUnloudedloadedStuff<<endl;
	sleep(1);
	cout<<endl;

	setDestination("Earth");
	cout<<"The destination is set from "<<getCurrentLocation()<<" to Earth"<<endl;
	cout<<"Preparing to turn the thrusters on...."<<endl;
	for(Thruster* item: thrustersList){
		item->turnOn();
		cout<<item->getId()<<" is turned on"<<endl;
		sleep(2);
	}
	cout<<"All the thrusters have been turned on...Ready to go to "<<getDestination()<<endl;;

	for(Thruster* item: thrustersList){
		item->turnOn();
		item->fireUp();
	}

	goToDestination();
	
	cout<<"\nNow entering Earth's atmosphere preparing to deploy parachute...\n"<<endl;
	double Thecurrent_Height =160;
	while(Thecurrent_Height>0){
		if(Thecurrent_Height <=6 && Thecurrent_Height>3){
			cout<<"\t\t\tCurrent height: "<<Thecurrent_Height<<"KM above the surface."<<endl;
			i=0;
			for(Parachute* item: parachuteList){
				cout<<"\n\t\t"<<i<<". "<<item->getId()<<"\t\t";
				item->deploy();
				cout<<endl;
				sleep(1);
				i++;
			}
			break;
		}
		else
		{
			cout<<"\t\t\tCurrent height: "<<Thecurrent_Height<<"KM above the surface."<<endl;
			sleep(1);
		}
		Thecurrent_Height-=19.25;
	}
	missionComplete();
	
}


/**
 * @brief removes the cargo when reaching the destination and preparing to go back to earth
 * 
 */
void Spacecraft::Unloading(){
	if(isCrewDragon()==true)
	{
		cout<<"Now unloading cargo and some members(N.B Overall weight has to be < 800KG)"<<endl;
		while(getCurrentWeight()){
			cout<<"What do you want to unload? \n 0:Cargo\t 1:Crew Member"<<endl;
						int optionR;
						string strInput = "";
                        while (true){
                            getline(cin, strInput);
                            stringstream myStream(strInput);
                            if ( (myStream >> optionR) ){
                                    if(optionR >=0 && optionR<=1 ){
                                        break;
                                    }
									 else
                                		cout << "Invalid input, please try again" << endl;
                                }
                               
                        }  
			if(optionR== 0){
					while (getCurrentWeight())
					{
							cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\t\tCargo Information:"<<endl;
							cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
							double w = 0;
							int i=0;

							for(CrewMember* item: getCrewList()){
								w += item->getWeight();
							}

							for(Cargo* item: getCargoList()){
								cout<<i<<". "<<item->getName()<<" weight: "<<item->getWeight()<<" Kg"<<endl;
								w += item->getWeight();
								i++;
							}
							cout<<endl;
							cout<<"Total spacecraft weight is: "<<w<<endl;
							cout<<endl;
							
							int cCargoIndex;
							cout<<"Please enter the index of the cargo you want to remove"<<endl;
									string strInput = "";
									while (true){
										getline(cin, strInput);
										stringstream myStream(strInput);
										if ( (myStream >> cCargoIndex) ){
												if(cCargoIndex >=0 && cCargoIndex<getCargoList().size() ){
													break;
												}
												else
													cout << "Invalid input, please try again" << endl;
											}
										
									}  
							string cargoName;
							int c=0;
							for(Cargo* item: getCargoList()){
								if(item != NULL){
									if(cCargoIndex==c)
									{
										cargoName+=to_string(c)+". "+item->getName()+" weight: "+to_string(item->getWeight()).substr(0,5)+" Kg";
									}
									c++;
								}

							}
							detachCargo(cCargoIndex);
							theUnloudedloadedStuff+=" unloading: "+cargoName+"	";
							int doneRCargo;
							cout<<"Do you want to remove another cargo load? (0:No 1:Yes)"<<endl;
							strInput = "";
									while (true){
										getline(cin, strInput);
										stringstream myStream(strInput);
										if ( (myStream >> doneRCargo) ){
												if(doneRCargo >=0 && doneRCargo<=1 ){
													break;
												}
												else
													cout << "Invalid input, please try again" << endl;
											}
										
									}  
							if(doneRCargo==0){
								break;
							}
									
									
					}
			
			}
			else{
				while(getCurrentWeight())
				{
					cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\tCrew Information:"<<endl;
						cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
						int i=0;
						double w=0;
						for(CrewMember* item: getCrewList()){
							cout<<i<<". "<<item->getName()<<" weight: "<<item->getWeight()<<" Kg"<<endl;
							w += item->getWeight();
							i++;
						}
						
						for(Cargo* item: getCargoList()){
							w += item->getWeight();
						}
						cout<<endl;
						cout<<"Total spacecraft weight is: "<<w<<endl;
						cout<<endl;

						int memberIndex;
						crewInfo();
						cout<<"Please select the index of the member you want to remove."<<endl;
						string strInput = "";
								while (true){
									getline(cin, strInput);
									stringstream myStream(strInput);
									if ( (myStream >> memberIndex) ){
											if(memberIndex >=0 && memberIndex<=getCrewList().size()-1 ){
												break;
											}
											else
												cout << "Invalid input, please try again" << endl;
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
							cout<<"Do you want to remove another Crew Member? (0:No 1:Yes)"<<endl;
							strInput = "";
									while (true){
										getline(cin, strInput);
										stringstream myStream(strInput);
										if ( (myStream >> donemember) ){
												if(donemember >=0 && donemember<=1 ){
													break;
												}
												else
													cout << "Invalid input, please try again" << endl;
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
                        while (true){
                            getline(cin, strInput);
                            stringstream myStream(strInput);
                            if ( (myStream >> yes) ){
                                    if(yes >=0 && yes<=1 ){
                                        break;
                                    }
									 else
                                		cout << "Invalid input, please try again" << endl;
                                }
                               
                        }  
			if(yes == 1){
				if(getCurrentWeight()>800){
					cout<<"Please remove more weight"<<endl;
				}
				else{
					break;
				}
			}
		}

	}
	else
	{
		cout<<"Now unloading cargo(N.B Overall weight has to be < 800KG)"<<endl;
		while(getCurrentWeight()){
			cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\tCargo Information:"<<endl;
				cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
				double w = 0;
				int i=0;

				for(Cargo* item: getCargoList()){
					cout<<i<<". "<<item->getName()<<" weight: "<<item->getWeight()<<" Kg"<<endl;
					w += item->getWeight();
					i++;
				}
				cout<<endl;
				cout<<"Total spacecraft weight is: "<<w<<endl;
				cout<<endl;
				
				int cCargoIndex;
				cout<<"Please enter the index of the cargo you want to remove."<<endl;
				string strInput = "";
                        while (true){
                            getline(cin, strInput);
                            stringstream myStream(strInput);
                            if ( (myStream >> cCargoIndex) ){
                                    if(cCargoIndex >=0 && cCargoIndex<=getCargoList().size()-1 ){
                                        break;
                                    }
									 else
                                		cout << "Invalid input, please try again" << endl;
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
				detachCargo(cCargoIndex);
				theUnloudedloadedStuff+=" unloading: "+cargoName+"	";
				int doneRCargo;
				cout<<"Do you want to remove another cargo load? (0:No 1:Yes)"<<endl;
				strInput = "";
                        while (true){
                            getline(cin, strInput);
                            stringstream myStream(strInput);
                            if ( (myStream >> doneRCargo) ){
                                    if(doneRCargo >=0 && doneRCargo<=1 ){
                                        break;
                                    }
									 else
                                		cout << "Invalid input, please try again" << endl;
                                }
                                
                        }  
				if(doneRCargo==0){
					break;
				}

			
		}

	}
	
		
}
