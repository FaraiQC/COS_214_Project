#include "CrewDragonSpacecraft.h"
#include <iostream>

using namespace std;

//@brief Constructor creates a CrewDragonSpaceCraft on Earth with no crew members
CrewDragonSpacecraft::CrewDragonSpacecraft() {
	cout<<"CrewDragonSpacecraft has been created"<<endl;
	setCurrentLocation("Earth");
	NumCrewMember=0;
	setIsCrewDragon(true);
}

//@brief Calculates the total weight of the Crew and the Cargo
//@return returns the calculated weight
double CrewDragonSpacecraft::getCurrentWeight() {
	double weight=0;
	for(CrewMember* item: spacecraftCrew){
		weight += item->getWeight();
	}
	for(Cargo* item: getCargoList()){
		weight += item->getWeight();
	}
	return weight;
}

//@brief gets the current Height of the Spacecraft
//@return returns the current height of the Spacecraft
double CrewDragonSpacecraft::getCurrentHeight() {
	return this->currentHeight;
}

//@brief Sets the current height of the Spacecraft
//@param currtHight is the currentHeight of the Spacecraft
void CrewDragonSpacecraft::setCurrentHeight(double currentHeight) {
	this->currentHeight = currentHeight;
}


//@brief Adds crew members to the spacecraftCrew vector
//@param member is the CrewMember to be added to the spacecraftCrew
void CrewDragonSpacecraft::enterCrewMember(CrewMember* member){
	spacecraftCrew.push_back(member);
	cout<<member->getName()<<" has borded the spacecraft"<<endl;
	NumCrewMember++;
}

//@brief removes a crew member that is at a specific position in the spacecraftCrew vector
//@param index is the position in the spacecraftCrew vector where a CrewMember will be removed
void CrewDragonSpacecraft::removeCrewMember(int index){
	spacecraftCrew.erase(spacecraftCrew.begin()+index);
	NumCrewMember--;
}

//@brief Displays the crew's weight in kilograms
void CrewDragonSpacecraft::crewInfo(){
	cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\tCrew Information:"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	double w = 0;
	int i=0;
	for(CrewMember* item: spacecraftCrew){
		cout<<i<<". "<<item->getName()<<" weight: "<<item->getWeight()<<" kg"<<endl;
		w += item->getWeight();
		i++;
	}
	cout<<endl;
	cout<<"Total crew weight is: "<<w<<endl;
	cout<<endl;
}

//@brief gets the number of crew members
//@return returns NumCrewMember
int CrewDragonSpacecraft::getTotalNumCrewMember()
{
	return NumCrewMember;
}

//@brief Gets the list of Crew members
//@return returns spacecraftCrew
vector<CrewMember*> CrewDragonSpacecraft::getCrewList(){
	return spacecraftCrew;
}