#include "Thruster.h"
#include <iostream>

Thruster::Thruster() {
	cout<<"Thruster has been created"<<endl;
}

void Thruster::setPower(int power) {
	this->power = power;
}

int Thruster::getPower() {
	return this->power;
}

void Thruster::fireUp() {
	cout<<"Thruster turned on, firing up!"<<endl;
}

void Thruster::shutDown() {
	cout<<"Thruster has been shut down"<<endl;
}
