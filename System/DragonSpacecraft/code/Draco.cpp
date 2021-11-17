#include "Draco.h"
#include <iostream>

using namespace std;

Draco::Draco() {
	turnOff();
	this->setPower(80);
	SetDracoisCreatedChecker(0);
}

Draco::Draco(string id) {
	SetDracoisCreatedChecker(0);
	this->setPower(80);
	this->setId(id);
	turnOff();
}

void Draco::fireUp() {
	if(isOn() == true){
		cout<<getId()<<" turned on, firing up!"<<endl;
	}
	else{
		cout<<getId()<<" is not turned on yet, please turn it on"<<endl;
	}	
}

void Draco::shutDown() {
	this->turnOff();
	cout<<getId()<<" has been shut down"<<endl;
}
