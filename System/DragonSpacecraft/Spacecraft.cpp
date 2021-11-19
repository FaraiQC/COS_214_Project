#include "Spacecraft.h"
#include <iostream>

using namespace std;

 Spacecraft::Spacecraft() {
	reused = 0;
	setCurrentLocation("Earth");
}

void Spacecraft::setCurrentLocation(string location) {
	this->currentLocation = location;
}

string Spacecraft::getCurrentLocation() {
	return this->currentLocation;
}

void Spacecraft::setDestination(string destination) {
	this->destination = destination;
}

double Spacecraft::getWeightToOrbit() {
	return maxWeightToEarth;
}

void Spacecraft::setWeightToOrbit(double weight) {
	this->maxWeightToOrbit=weight;
}

double Spacecraft::getWeightToEarth() {
	return this->maxWeightToEarth;
}

void Spacecraft::goToDestination() {
	cout<<"\n\n\t\t\tThe spacecraft leaves "<<this->currentLocation<<" to "<<this->destination<<endl<<endl;
	for(int i=0; i<5;i++){
		cout<<"\t\t\t\tHEADING TO "<<destination<<endl;
		sleep(1);
	}
	cout<<"\n\t\t\tThe Spacecraft has arrived at "<<destination<<endl<<endl;
	setCurrentLocation(destination);
}

void Spacecraft::notify() {
	for(int i=0;i<observerList.size();i++)
	{
		if(observerList[i] !=NULL)
			observerList[i]->update();
	}
}

void Spacecraft::attach(ParachuteSystemObserver* obj) {
	observerList.push_back(obj);
}


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

void Spacecraft::attachCargo(Cargo* obj) {
	cargoList.push_back(obj);
	cout<<obj->getName()<<" has been added to the list"<<endl;
}

void Spacecraft::detachCargo(int index) {
	cargoList.erase(cargoList.begin()+index);
}

void Spacecraft::missionComplete() {
	cout<<"\t\t\tThe spacecraft has reached earth, successfully."<<endl<<endl;
	reused++;
}

void Spacecraft::attachThruster(Thruster* thruster){
	this->thrustersList.push_back(thruster);
}

void Spacecraft::detachThruster(){
	thrustersList.clear();
}

double Spacecraft::getCurrentHeight(){
	return 0;
}

void Spacecraft::setCurrentHeight(double currtHight){
	//this->currentHeightFromGround()
}

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

void Spacecraft::attachParachute(Parachute* parachute){
	parachuteList.push_back(parachute);
	cout<<parachute->getId()<<" Has been added to the spacecraft"<<endl;
}

void Spacecraft::detachParachute(){
	parachuteList.clear();
}

double Spacecraft::TotalPowerOfThrusters(){
	double sum=0;
	for(Thruster* item: thrustersList){
		sum+=item->getPower();
	}
	return sum;
}


void Spacecraft::crewInfo(){
	
}
int Spacecraft::getTotalNumCrewMember()
{
	return 0;
}

bool Spacecraft::IsSpcacecraftInOptimum(){
	cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\tChecking if the spacecraft is in optimum."<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	
	int isOptimum=0;
	cout<<"Parachute: ";
	if(parachuteChecker==0 ) //IF 0 is Mark 3... then pass
	{
		cout<<"Pass.\n"<<endl;
		isOptimum++;
	}else
	{
		if(getCurrentWeight()<5100 && parachuteChecker==1 ) //IF currentWeight is greatorthan 85% ...you must you use Mark3 parachute
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

vector<Cargo*> Spacecraft::getCargoList(){
	return cargoList;
}


void Spacecraft::enterCrewMember(CrewMember* a){

}
void Spacecraft::removeCrewMember(int a){

}

vector<CrewMember*>Spacecraft:: getCrewList(){
	vector<CrewMember*> a;
	return a;
}
bool Spacecraft::isCrewDragon(){
	return IsCrewDragon;
}

void Spacecraft::setIsCrewDragon(bool IsCrewDragon){
	this->IsCrewDragon=IsCrewDragon;
}

string Spacecraft::getDestination(){
	return destination;
}

void Spacecraft::launch(){	
	cout<<"Please select the destination of the Spacecraft"<<endl;
	string dest;
	cin>>dest;
	setDestination(dest);
	cout<<"The destination is set from "<<getCurrentLocation()<<"to "<<dest<<endl;
	cout<<"Preparing to turn the thrusters on...."<<endl;
	for(Thruster* item: thrustersList){
		item->turnOn();
		cout<<item->getId()<<" is turned on"<<endl;
		sleep(1);
	}
	cout<<"All the thrusters have been turned on...Ready to go to "<<getDestination();

	for(Thruster* item: thrustersList){
		item->turnOn();
		item->fireUp();
	}

	goToDestination();
	double w = 0;
	int i=0;
	cout<<"Now unloading cargo and some members(N.B Overall weight has to be < 800KG)"<<endl;
	while(getCurrentWeight()){
		cout<<"What do you want to unload? \n 0:Cargo\t 1:Crew Member"<<endl;
		bool optionR;
		cin>>optionR;
		if(optionR== 0){
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
			cout<<"Please enter the ID of the cargo you want to remove"<<endl;
			cin>>cCargoIndex;
			while(cCargoIndex<0 ||cCargoIndex>getCargoList().size()){
				cout<<"Please enter valid index"<<endl;
				cin>>cCargoIndex;
			}
			detachCargo(cCargoIndex);
			bool doneRCargo;
			cout<<"Do you want to remove another cargo load? (0:No 1:Yes)"<<endl;
			cin >>doneRCargo;
			if(doneRCargo==0){
				break;
			}
		}
		else{
			cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\tCrew Information:"<<endl;
			cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
			int i=0;
			double w=0;
			for(CrewMember* item: getCrewList()){
				cout<<i<<". "<<item->getName()<<" weight: "<<item->getWeight()<<" Kg"<<endl;
				w += item->getWeight();
			}

			for(Cargo* item: getCargoList()){
				w += item->getWeight();
				i++;
			}
			cout<<endl;
			cout<<"Total spacecraft weight is: "<<w<<endl;
			cout<<endl;

			int memberIndex;
			crewInfo();
			cout<<"Please select the index of the member you want to remove"<<endl;
			cin>>memberIndex;
			while(memberIndex<0 || memberIndex>getCrewList().size()){
				cin>>memberIndex;
			}
			removeCrewMember(memberIndex);
			crewInfo();	
		}
		cout<<"Are you done unloading (0:No 1:Yes)"<<endl;
		bool yes;
		cin>>yes;
		if(yes == true){
			if(getCurrentWeight()>800){
				cout<<"Please remove more weight"<<endl;
			}
			else{
				break;
			}
		}
	}	

	setDestination("Earth");
	cout<<"The destination is set from "<<getCurrentLocation()<<" to Earth"<<endl;
	cout<<"Preparing to turn the thrusters on...."<<endl;
	for(Thruster* item: thrustersList){
		item->turnOn();
		cout<<item->getId()<<" is turned on"<<endl;
		sleep(2);
	}
	cout<<"All the thrusters have been turned on...Ready to go to "<<getDestination();

	for(Thruster* item: thrustersList){
		item->turnOn();
		item->fireUp();
	}

	goToDestination();
	cout<<"\nNow entering Earth's atmosphere preparing to deploy parachute...\n"<<endl;
	double Thecurrent_Height =160;
	while(Thecurrent_Height>0){
		if(Thecurrent_Height <=6 && Thecurrent_Height>3){
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
			cout<<"\t\tTESTING HEIGHT:\t\tNOT IN  OPTIMUM HEIGHT TO DEPLOY PARACHUTE"<<endl;
			sleep(1);
		}
		Thecurrent_Height-=19.25;
	}
	missionComplete();
	// if(parachuteChecker==0 ) {//IF 0 is Mark 3... then pass
	// 	int Thecurrent_Hight=160;
	// 	Mark3ParachuteSystemObserver * obsever=new Mark3ParachuteSystemObserver(this);	
	// 	for(int i=0;i<5;i++){
	// 		setCurrentHeight(Thecurrent_Hight);
	// 		obsever->update();
	// 		obsever->print();
	// 		Thecurrent_Hight -=30;
	// 	}
	// }
	// else if(parachuteChecker==1)
	// {
	// 	int Thecurrent_Hight=160;
	// 	Mark2ParachuteSystemObserver * obsever=new Mark2ParachuteSystemObserver(this);	
	// 	for(int i=0;i<5;i++){
	// 		setCurrentHeight(Thecurrent_Hight);
	// 		obsever->update();
	// 		obsever->print();
	// 		Thecurrent_Hight -=30;


	// 	}
	// }
}
