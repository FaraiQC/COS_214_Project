#include "Mark3Creator.h"
#include <iostream>

using namespace std;


/**
 * @brief Construct a new Mark 3 Creator:: Mark 3 Creator object
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
Mark3Creator::Mark3Creator() {
	std::cout
		<< "\t"
		<<"CREATE:\n\t\tMark_3\n"
		<<endl;
}


/**
 * @brief Creates a Mark3Parachute with a specific id
 * 
 * @param a :-the id of the Parachute
 * @return Parachute* :- New Mark3
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
Parachute* Mark3Creator::createParachute(string a){
	return new Mark3Parachute(a);
}

/**
 * @brief FINAL EDIT CREDIT
 * 
 * @author Malope Elphus (u20451696)
 */