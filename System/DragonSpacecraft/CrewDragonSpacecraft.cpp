#include "CrewDragonSpacecraft.h"
#include <iostream>

using namespace std;

CrewDragonSpacecraft::CrewDragonSpacecraft() {
	cout<<"CrewDragonSpacecraft has been created"<<endl;
	setCurrentLocation("Earth");
	NumCrewMember=0;
	setIsCrewDragon(true);
}

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

double CrewDragonSpacecraft::getCurrentHeight() {
	return this->currentHeight;
}

void CrewDragonSpacecraft::setCurrentHeight(double currentHeight) {
	this->currentHeight = currentHeight;
}

void CrewDragonSpacecraft::enterCrewMember(CrewMember* member){
	spacecraftCrew.push_back(member);
	cout<<member->getName()<<" has borded the spacecraft"<<endl;
	NumCrewMember++;
}

void CrewDragonSpacecraft::removeCrewMember(int index){
	spacecraftCrew.erase(spacecraftCrew.begin()+index);
	NumCrewMember--;
}

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
int CrewDragonSpacecraft::getTotalNumCrewMember()
{
	return NumCrewMember;
}

vector<CrewMember*> CrewDragonSpacecraft::getCrewList(){
	return spacecraftCrew;
}