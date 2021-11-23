#include "Draco.h"
#include <iostream>

using namespace std;


/**
 * @brief Construct a new Draco:: Draco object
 * 		  Switched off with a power of 80
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
Draco::Draco() {
	turnOff();
	this->setPower(80);
	SetDracoisCreatedChecker(0);
}


/**
 * @brief Construct a new Draco:: Draco object
 * 		  Switched off with a power of 80
 * 
 * @param id :-ID of the Draco
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
Draco::Draco(string id) {
	SetDracoisCreatedChecker(0);
	this->setPower(80);
	this->setId(id);
	turnOff();
}


/**
 * @brief Turn Draco on
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
void Draco::fireUp() {
	if(isOn() == true){
		std::cout
			<< "\t"
			<< getId()
			<<"\n\t\tSTATUS: Active\n"
			<<std::endl;
	}
	else{
		std::cout
			<< "\t"
			<<getId()
			<<"\n\t\tSTATUS: Inactive\n"
			<< "\t\tMESSAGE: Please Turn it On\n"
			<<endl;
	}	
}

//@brief 

/**
 * @brief 
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
void Draco::shutDown() {
	this->turnOff();

	std::cout
		<< "\t"
		<<getId()
		<<"\n\t\tSHUTDOWN\n"
		<<std::endl;
}


/**
 * @brief FINAL EDIT CREDIT
 * 
 * @author Malope Elphus (u20451696)
 * 
 */