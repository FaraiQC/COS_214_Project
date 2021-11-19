#include "Thruster.h"
#include <iostream>

//@brief Constructor initializes the thrusterSwitch to false
Thruster::Thruster() {
	this->thrusterSwitch = false;
}

//@briefConstructor initializes the thruster switch to false and sets the ID of the Thruster
//@param Sets the ID of the thruster
Thruster::Thruster(string id) {
	this->thrusterSwitch = false;
	setId(id);
}

//@brief Destructor
Thruster::~Thruster(){

}

//@brief Sets the id of the Thruster
//@param id is the id of the Thruster
void Thruster::setId(string id){
	this->id = id;
}

//@brief Gets the id of the Thruster
//@return returns the id of the Thruster
string Thruster::getId(){
	return id;
}

//@brief Sets the power of the Thruster
//@param power is the power of the Thruster
void Thruster::setPower(int power) {
	this->power = power;
}

//@brief Gets the power of the Thruster
//@return returns the power of the Thruster
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

//@brief Checks if the thrusterSwitch is on or off
//@return returns true of the thrusterSwitch is on
//@return returns false if the thrusterSwitch is off
bool Thruster::isOn(){
	return this->thrusterSwitch;
}

//@brief Switches off the thrusterSwitch
void Thruster::turnOff(){
	this->thrusterSwitch = false;
}

//@brief Switches on the thrusterSwitch
void Thruster::turnOn(){
	this->thrusterSwitch = true;
}

//@brief confirms if Draco was created or not
//@param check is either 0 to show that no Draco was created, or 1 to show that a Draco was created
void Thruster::SetDracoisCreatedChecker(int chech)
{
	this->chech=chech;
}

//@brief shows if a Draco was created or not
//@brief returns the check to see if a Draco was created or not
int Thruster::GetDracoisCreatedChecker()
{
	return chech;
}
