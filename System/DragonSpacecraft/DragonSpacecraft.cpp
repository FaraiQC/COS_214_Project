#include "DragonSpacecraft.h"
#include <iostream>

using namespace std;

//@brief Constructor Creates a DragonSpacecraft on earth

/**
 * @brief Construct a new Dragon Spacecraft:: Dragon Spacecraft object
 * 		  on Earth
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
DragonSpacecraft::DragonSpacecraft(){
	std::cout
		<< "\t"
		<<"SPACECRAFT: Dragon\n\t\tCREATED.\n"
		<<std::endl;

	setCurrentLocation("Earth");
	setIsCrewDragon(false);
}

/**
 * @brief Calculates the total weight of the Crew and the Cargo
 * 
 * @return double :-the calculated weight
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
double DragonSpacecraft::getCurrentWeight(){
	double weight=0;
	for(Cargo* item: getCargoList()){
		weight += item->getWeight();
	}
	return weight;
}

/**
 * @brief Adds cargo to the Spacecraft by adding it in the CargoList vector
 * 
 * @param cargo :-the Cargo that must be added to the Spacecraft
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void DragonSpacecraft::loadCargo(Cargo* cargo){
	this->getCargoList().push_back(cargo);
}


/**
 * @brief Removes a Cargo with a specific indecs from the Spacecraft by erasing it from the CargoList vector at that position
 * 
 * @param index :-the index at which the cargo will be removed from the CargoList vector
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void DragonSpacecraft::removeCargo(int index) {
	getCargoList().erase(getCargoList().begin()+index);
}


/**
 * @brief Gets the current height of the spacecraft
 * 
 * @return double :-currentHeight
 */
double DragonSpacecraft::getCurrentHeight(){
	return this->currentHeight;
}


/**
 * @brief Sets the current height of the Spacecraft
 * 
 * @param currentHeight :-the currentHeight of the Spacecraft
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void DragonSpacecraft::setCurrentHeight(double currentHeight) {
	this->currentHeight = currentHeight;
}

/**
 * @brief FINAL EDIT CREDIT
 * 
 * @author Malope Elphus (u20451696)
 * 
 */