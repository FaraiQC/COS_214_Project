#include "CrewDragonSpacecraft.h"
#include <iostream>

using namespace std;

CrewDragonSpacecraft::CrewDragonSpacecraft() {
	cout<<"CrewDragonSpacecraft has been created"<<endl;
}



double CrewDragonSpacecraft::currentWeight() {
	
	double weight=0;
	for(Cargo* item: spacecraftCargo){
		weight += item->getWeight();
	}
	for(CrewMember* item: spacecraftCrew){
		weight += item->getWeight();
	}
	return weight;
}

int CrewDragonSpacecraft::getCurrtHight_crewDragon() {
	return this->currtHight_crewDragon;
}

void CrewDragonSpacecraft::setCurrtHight_crewDragon(int currtHight_crewDragon) {
	this->currtHight_crewDragon = currtHight_crewDragon;
}
