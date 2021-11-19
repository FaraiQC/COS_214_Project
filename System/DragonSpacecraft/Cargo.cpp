#include "Cargo.h"

//@brief Constructor
Cargo::Cargo() {
	
}

//@brief Sets the name and the weight of the cargo
//@param Sets the name of the Cargo
//@param Sets weight of the Cargo
Cargo::Cargo(string nameOfCargo, double weight){
	setName(nameOfCargo);
	setWeight(weight);
}

//@brief gets the description of the Cargo
//@return returns the description of the Cargo
string Cargo::getDescription() {
	return this->description;
}

//@brief gets the name of the Cargo
//@return returns the name of the Cargo
string Cargo::getName() {
	return this->nameOfCargo;
}

//@brief Sets the description of the Cargo
//@param Name sets the description of the Cargo
void Cargo::setDescription(string Name) {
	this->description = Name;
}

//@brief Sets the nameOfCargo
//@param name sets the name of the Cargo
void Cargo::setName(string name) {
	this->nameOfCargo = name;
}

//@brief Sets the weight of the Cargo
//@param weight sets the weight of the Cargo
void Cargo::setWeight(double weight){
	this->weight = weight;
}

//@brief gets the weight of the Cargo
//@return returns the weight of the Cargo
double Cargo::getWeight(){
	return this->weight;
}
