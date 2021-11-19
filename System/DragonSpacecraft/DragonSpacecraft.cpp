#include "DragonSpacecraft.h"
#include <iostream>

using namespace std;

DragonSpacecraft::DragonSpacecraft() {
	cout<<"The Dragon spacecraft has been created"<<endl;
	setCurrentLocation("Earth");
	setIsCrewDragon(false);
}

double DragonSpacecraft::getCurrentWeight() {
	double weight=0;
	for(Cargo* item: getCargoList()){
		weight += item->getWeight();
	}
	return weight;
}

void DragonSpacecraft::loadCargo(Cargo* cargo) {
	this->getCargoList().push_back(cargo);
}

void DragonSpacecraft::removeCargo(int index) {
getCargoList().erase(getCargoList().begin()+index);
}

double DragonSpacecraft::getCurrentHeight(){
	return this->currentHeight;
}

void DragonSpacecraft::setCurrentHeight(double currentHeight) {
	this->currentHeight = currentHeight;
}