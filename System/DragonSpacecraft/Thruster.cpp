#include "Thruster.h"
#include <iostream>


/**
 * @brief Construct a new Thruster:: Thruster object
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
Thruster::Thruster() {
	this->thrusterSwitch = false;
}


/**
 * @brief Construct a new Thruster:: Thruster object
 * 	 	  initializes the thruster switch to false and sets the ID of the Thruster
 * 
 * @param id :-thruster id
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
Thruster::Thruster(string id) {
	this->thrusterSwitch = false;
	setId(id);
}



/**
 * @brief Destroy the Thruster:: Thruster object
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
Thruster::~Thruster(){

}


/**
 * @brief Sets the id of the Thruster
 * 
 * @param id :- thruster id
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Thruster::setId(string id){
	this->id = id;
}


/**
 * @brief Gets the id of the Thruster
 * 
 * @return string :-id
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
string Thruster::getId(){
	return id;
}


/**
 * @brief Sets the power of the Thruster
 * 
 * @param power :- Thruster power
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Thruster::setPower(int power) {
	this->power = power;
}


/**
 * @brief Gets the power of the Thruster
 * 
 * @return int :-power
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
int Thruster::getPower() {
	return this->power;
}


/**
 * @brief  Checks if the thrusterSwitch is on or off
 * 
 * @return true :-if(Thruster is on)
 * @return false :-if(Thruster is off)
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
bool Thruster::isOn(){
	return this->thrusterSwitch;
}


/**
 * @brief Turns the thrusters off
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
void Thruster::turnOff(){
	this->thrusterSwitch = false;
}


/**
 * @brief Turns the trusters on
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
void Thruster::turnOn(){
	this->thrusterSwitch = true;
}


/**
 * @brief Confirms if Draco was created or not
 * 
 * @param check :-either 0 to show that no Draco was created, or 1 to show that a Draco was created
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Thruster::SetDracoisCreatedChecker(int check)
{
	this->chech=check;
}


/**
 * @brief Shows if a Draco was created or not
 * 
 * @return int :-chech(check)
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
int Thruster::GetDracoisCreatedChecker()
{
	return chech;
}


/**
 * @brief FINAL EDIT CREDS
 * 
 * @author Malope Elphus (u20451696)
 * 
 */