#include "Mark3Parachute.h"
#include <iostream>

using namespace std;

/**
 * @brief Construct a new Mark 3 Parachute:: Mark 3 Parachute object
 * 
 */
Mark3Parachute::Mark3Parachute() {
	
}

/**
 * @brief Construct a new Mark 3 Parachute:: Mark 3 Parachute object
 * 
 * @param name 
 */
Mark3Parachute::Mark3Parachute(string name) {
	setId(name);
	SetMark2isCreatedChecker(1);
}

/**
 * @brief Displays the parachute that is being deployed
 * 
 */
void Mark3Parachute::deploy() {
	cout<<"Now deploying Mark3Parachute."<<endl;
}
