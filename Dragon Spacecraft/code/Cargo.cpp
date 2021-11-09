#include "Cargo.h"

Cargo::Cargo() {
	
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


void Cargo::setWeight(double a){
	this->weight = a;
}

double Cargo::getWeight(){
	return this->weight;
}


