#include "Mark2Parachute.h"
#include <stdlib.h>
#include <ctime>
#include <iostream>

using namespace std;


/**
 * @brief Construct a new Mark 2 Parachute:: Mark 2 Parachute object
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
Mark2Parachute::Mark2Parachute() {

}


/**
 * @brief Construct a new Mark 2 Parachute:: Mark 2 Parachute object
 * 		  Sets the ID of the Parachute and checks that it is created, which it is.
 * 
 * @param name :-the ID of the Parachute
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
Mark2Parachute::Mark2Parachute(string name) {
	setId(name);
	SetMark2isCreatedChecker(0);
}



/**
 * @brief Displays that Mark2Parachute is now being deployed
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
void Mark2Parachute::deploy() {
	std::cout
		<< "\t"
		<< "DEPLOY:\n\t\tMark2\n"
		<< std::endl;
}

/**
 * @brief FINAL EDIT CREDIT
 * 
 * @author Malope Elphus (u20451696)
 * 
 */