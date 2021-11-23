#include "Mark3Parachute.h"
#include <iostream>

using namespace std;

//@brief Constructor

/**
 * @brief Construct a new Mark 3 Parachute:: Mark 3 Parachute object
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
Mark3Parachute::Mark3Parachute() {
	
}

/**
 * @brief Construct a new Mark 3 Parachute:: Mark 3 Parachute object
 * 		  Sets the ID of the Parachute and checks that it is created, which it is.
 * 
 * @param name :-the ID of the Parachute
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
Mark3Parachute::Mark3Parachute(string name) {
	setId(name);
	SetMark2isCreatedChecker(1);
}

/**
 * @brief Displays that Mark3Parachute is now being deployed
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
void Mark3Parachute::deploy() {
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