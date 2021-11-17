#include "Cargo.h"

Cargo::Cargo() {
	
}

Cargo::Cargo(string nameOfCargo, double weight){
	setName(nameOfCargo);
	setWeight(weight);
}

string Cargo::getDescription() {
	return this->description;
}

string Cargo::getName() {
	return this->nameOfCargo;
}

void Cargo::setDescription(string Name) {
	this->description = Name;
}

void Cargo::setName(string name) {
	this->nameOfCargo = name;
}


void Cargo::setWeight(double weight){
	this->weight = weight;
}

double Cargo::getWeight(){
	return this->weight;
}


