#include "DragonSpacecraft.h"
#include <iostream>

using namespace std;

//@brief Constructor Creates a DragonSpacecraft on earth
DragonSpacecraft::DragonSpacecraft() {
	cout<<"The Dragon spacecraft has been created"<<endl;
	setCurrentLocation("Earth");
	setIsCrewDragon(false);
}

//@brief Calculates the total weight of the Cargo in the Spacecraft
//@return returns the calculated weight of the cargo
double DragonSpacecraft::getCurrentWeight() {
	double weight=0;
	for(Cargo* item: getCargoList()){
		weight += item->getWeight();
	}
	return weight;
}

//@brief Adds cargo to the Spacecraft by adding it in the CargoList vector
//@param cargo is the Cargo that must be added to the Spacecraft
void DragonSpacecraft::loadCargo(Cargo* cargo) {
	this->getCargoList().push_back(cargo);
}

//@brief Removes a Cargo with a specific indecs from the Spacecraft by erasing it from the CargoList vector at that position
//@param index is the index at which the cargo will be removed from the CargoList vector
void DragonSpacecraft::removeCargo(int index) {
getCargoList().erase(getCargoList().begin()+index);
}

//@brief gets the current height of the spacecraft
//@return returns the currentHeight of the Spacecraft
double DragonSpacecraft::getCurrentHeight(){
	return this->currentHeight;
}

//@brief sets the current height of the Spacecraft
//@param currtHight is the currentHeight of the Spacecraft
void DragonSpacecraft::setCurrentHeight(double currentHeight) {
	this->currentHeight = currentHeight;
}
