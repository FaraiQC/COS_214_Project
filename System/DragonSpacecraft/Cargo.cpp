#include "Cargo.h"

/**
 * @brief Construct a new Cargo:: Cargo object
 * 
 */
Cargo::Cargo() {
	
}

/**
 * @brief Construct a new Cargo:: Cargo object
 * 
 * @param nameOfCargo 
 * @param weight 
 */
Cargo::Cargo(string nameOfCargo, double weight){
	setName(nameOfCargo);
	setWeight(weight);
}

/**
 * @brief getter for the description
 * 
 * @return string 
 */
string Cargo::getDescription() {
	return this->description;
}

/**
 * @brief getter for the nameofCargo
 * 
 * @return string 
 */
string Cargo::getName() {
	return this->nameOfCargo;
}

/**
 * @brief setter for description
 * 
 * @param Name 
 */
void Cargo::setDescription(string Name) {
	this->description = Name;
}

/**
 * @brief setter for the nameOfCargo
 * 
 * @param name 
 */
void Cargo::setName(string name) {
	this->nameOfCargo = name;
}

/**
 * @brief setter for weight
 * 
 * @param weight 
 */
void Cargo::setWeight(double weight){
	this->weight = weight;
}

/**
 * @brief getter for weight
 * 
 * @return double 
 */
double Cargo::getWeight(){
	return this->weight;
}


