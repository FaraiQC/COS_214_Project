#include "DragonSpacecraft.h"
#include <iostream>

using namespace std;

/**
 * @brief Construct a new Dragon Spacecraft:: Dragon Spacecraft object
 * 
 */
DragonSpacecraft::DragonSpacecraft() {
	cout<<"The Dragon spacecraft has been created"<<endl;
	setCurrentLocation("Earth");
	setIsCrewDragon(false);
}

/**
 * @brief calculates the current weight
 * 
 * @return double 
 */
double DragonSpacecraft::getCurrentWeight() {
	double weight=0;
	for(Cargo* item: getCargoList()){
		weight += item->getWeight();
	}
	return weight;
}

/**
 * @brief loads the cargo to the list
 * 
 * @param cargo 
 */
void DragonSpacecraft::loadCargo(Cargo* cargo) {
	this->getCargoList().push_back(cargo);
}

/**
 * @brief removes the cargo from the list
 * 
 * @param index 
 */
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
