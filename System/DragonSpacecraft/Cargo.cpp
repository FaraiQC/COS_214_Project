
#include "Cargo.h"

/**
 * @brief Construct a new Cargo:: Cargo object
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
Cargo::Cargo(){
	
}

/**
 * @brief Construct a new Cargo:: Cargo object
 * 		  Sets the name and the weight of the cargo
 * 
 * @param nameOfCargo :-Sets the name of the Cargo
 * @param weight :-Sets weight of the Cargo
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
Cargo::Cargo(string nameOfCargo, double weight){
	setName(nameOfCargo);
	setWeight(weight);
}


/**
 * @brief gets the description of the Cargo
 * 
 * @return string :-the description of the Cargo
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
string Cargo::getDescription(){
	return this->description;
}


/**
 * @brief gets the name of the Cargo
 * 
 * @return string 
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
string Cargo::getName(){
	return this->nameOfCargo;
}


/**
 * @brief Sets the description of the Cargo
 * 
 * @param Name :-sets the description of the Cargo
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Cargo::setDescription(string Name){
	this->description = Name;
}


/**
 * @brief Sets the nameOfCargo
 * 
 * @param name :-sets the name of the Cargo
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Cargo::setName(string name){
	this->nameOfCargo = name;
}


/**
 * @brief Sets the weight of the Cargo
 * 
 * @param weight :-sets the weight of the Cargo
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Cargo::setWeight(double weight){
	this->weight = weight;
}


/**
 * @brief Gets the weight of the Cargo
 * 
 * @return double the weight of the Cargo
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
double Cargo::getWeight(){
	return this->weight;
}

/**
 * @brief FINAL EDIT CREDITS
 * 
 * @author Malope Elphus (u20451696)
 * 
 */