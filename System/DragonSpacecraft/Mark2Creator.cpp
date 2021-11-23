#include "Mark2Creator.h"
#include <iostream>

using namespace std;


/**
 * @brief Construct a new Mark 2 Creator:: Mark 2 Creator object
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
Mark2Creator::Mark2Creator(){
	std::cout
		<< "\t"
		<<"CREATE:\n\t\tMark_2\n"
		<<endl;
}


/**
 * @brief Creates a Mark2 Parachute with a specific ID
 * 
 * @param a :-the ID of the Parachute
 * @return Parachute* :-new Mark2
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
Parachute* Mark2Creator::createParachute(string a){
	return new Mark2Parachute(a);
}


/**
 * @brief FINAL EDIT CREDIT
 * 
 * @author Malope Elphus (u20451696)
 * 
 */