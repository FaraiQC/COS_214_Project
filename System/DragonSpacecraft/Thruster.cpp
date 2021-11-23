#include "Thruster.h"
#include <iostream>


/**
 * @brief Construct a new Thruster:: Thruster object
 * 
 */
Thruster::Thruster() {
	this->thrusterSwitch = false;
}


/**
 * @brief Construct a new Thruster:: Thruster object
 * 
 * @param id 
 */
Thruster::Thruster(string id) {
	this->thrusterSwitch = false;
	setId(id);
}


/**
 * @brief Destroy the Thruster:: Thruster object
 * 
 */
Thruster::~Thruster(){

}


/**
 * @brief set the ID of the thruster
 * 
 * @param id 
 */
void Thruster::setId(string id){
	this->id = id;
}


/**
 * @brief return the ID of the thruster
 * 
 * @return string 
 */
string Thruster::getId(){
	return id;
}


/**
 * @brief set the amount of power the thruster has
 * 
 * @param power 
 */
void Thruster::setPower(int power) {
	this->power = power;
}


/**
 * @brief return the amount of power the thruster
 * 
 * @return int 
 */
int Thruster::getPower() {
	return this->power;
}

// void Thruster::fireUp() {
// 	if(this->thrusterSwitch == true){
// 		cout<<"Thruster turned on, firing up!"<<endl;
// 	}
// 	else{
// 		cout<<"The thruster is not turned on yet, please turn it on"<<endl;
// 	}	
// }

// void Thruster::shutDown() {
// 	this->thrusterSwitch = false;
// 	cout<<"Thruster has been shut down"<<endl;
// }


/**
 * @brief Checks if the thrusterSwitch is on or off
 * 
 * @return true if the thrusterSwitch is on
 * @return false if the thrusterSwitch is off
 */
bool Thruster::isOn(){
	return this->thrusterSwitch;
}


/**
 * @brief Switches off the thrusterSwitch
 * 
 */
void Thruster::turnOff(){
	this->thrusterSwitch = false;
}


/**
 * @brief Switches on the thrusterSwitch
 * 
 */
void Thruster::turnOn(){
	this->thrusterSwitch = true;
}


/**
 * @brief confirms if Draco was created or not
 * 
 * @param chech 
 */
void Thruster::SetDracoisCreatedChecker(int chech)
{
	this->chech=chech;
}


/**
 * @brief shows if a Draco was created or not
 * 
 * @return int 
 */
int Thruster::GetDracoisCreatedChecker()
{
	return chech;
}
