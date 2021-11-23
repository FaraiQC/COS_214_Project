#include "SuperDraco.h"
#include <iostream>

using namespace std;


/**
 * @brief Construct a new Super Draco:: Super Draco object
 * 
 */
SuperDraco::SuperDraco() {
	turnOff();
	this->setPower(90);
	SetDracoisCreatedChecker(1);
}


/**
 * @brief Construct a new Super Draco:: Super Draco object
 * 
 * @param id 
 */
SuperDraco::SuperDraco(string id) {
	this->setPower(90);
	SetDracoisCreatedChecker(1);
	this->setId(id);
	turnOff();
}


/**
 * @brief Switches on the SuperDraco
 * 
 */
void SuperDraco::fireUp() {
	if(isOn() == true){
		cout<<getId()<<" turned on, firing up!"<<endl;
	}
	else{
		cout<<getId()<<" is not turned on yet, please turn it on"<<endl;
	}	
}


/**
 * @brief Switches off the SuperDraco
 * 
 */
void SuperDraco::shutDown() {
	this->turnOff();
	cout<<getId()<<" has been shut down"<<endl;
}

