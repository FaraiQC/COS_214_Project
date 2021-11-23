#include "CrewDragonSpacecraft.h"
#include <iostream>

using namespace std;

/**
 * @brief Construct a new Crew Dragon Spacecraft:: Crew Dragon Spacecraft object
 * 
 */
CrewDragonSpacecraft::CrewDragonSpacecraft() {
	cout<<"CrewDragonSpacecraft has been created"<<endl;
	setCurrentLocation("Earth");
	NumCrewMember=0;
	setIsCrewDragon(true);
}

/**
 * @brief calculates the current weight
 * 
 * @return double 
 */
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

/**
 * @brief getter for current weight
 * 
 * @return double 
 */
double CrewDragonSpacecraft::getCurrentHeight() {
	return this->currentHeight;
}

/**
 * @brief setter for current weight
 * 
 * @param currentHeight 
 */
void CrewDragonSpacecraft::setCurrentHeight(double currentHeight) {
	this->currentHeight = currentHeight;
}



/**
 * @brief adds a crew member
 * 
 * @param member 
 */
void CrewDragonSpacecraft::enterCrewMember(CrewMember* member){
	spacecraftCrew.push_back(member);
	cout<<member->getName()<<" has borded the spacecraft"<<endl;
	NumCrewMember++;
}

/**
 * @brief removes a crew member
 * 
 * @param index 
 */
void CrewDragonSpacecraft::removeCrewMember(int index){
	spacecraftCrew.erase(spacecraftCrew.begin()+index);
	NumCrewMember--;
}

/**
 * @brief gives info about the crew member
 * 
 */
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

/**
 * @brief returns the number of crew member
 * 
 * @return int 
 */
int CrewDragonSpacecraft::getTotalNumCrewMember()
{
	return NumCrewMember;
}

/**
 * @brief gets the spacecraft crew
 * 
 * @return vector<CrewMember*> 
 */
vector<CrewMember*> CrewDragonSpacecraft::getCrewList(){
	return spacecraftCrew;
}