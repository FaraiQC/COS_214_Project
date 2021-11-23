#include "SuperDraco.h"
#include <iostream>

using namespace std;

//@brief Constructor creates a SuperDraco with a power of 90 that is switched off

/**
 * @brief Construct a new Super Draco:: Super Draco object
 * 		  initialisedwith power of 90 and switched off
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
SuperDraco::SuperDraco() {
	turnOff();
	this->setPower(90);
	SetDracoisCreatedChecker(1);
}



/**
 * @brief Construct a new Super Draco:: Super Draco object
 * 		  initialisedwith power of 90 and switched off
 * 
 * @param id :-the id of the newly created SuperDraco
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
SuperDraco::SuperDraco(string id) {
	this->setPower(90);
	SetDracoisCreatedChecker(1);
	this->setId(id);
	turnOff();
}


/**
 * @brief Turn Draco on
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
void SuperDraco::fireUp() {
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
void SuperDraco::shutDown() {
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
 * @author Malope Elphus
 * 
 */