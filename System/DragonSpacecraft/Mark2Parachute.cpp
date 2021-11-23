#include "Mark2Parachute.h"
#include <stdlib.h>
#include <ctime>
#include <iostream>

using namespace std;

/**
 * @brief Construct a new Mark 2 Parachute:: Mark 2 Parachute object
 * 
 */
Mark2Parachute::Mark2Parachute() {

}

/**
 * @brief Construct a new Mark 2 Parachute:: Mark 2 Parachute object
 * 
 * @param name 
 */
Mark2Parachute::Mark2Parachute(string name) {
	setId(name);
	SetMark2isCreatedChecker(0);
}

/**
 * @brief Prints out the parachute being deployed
 * 
 */
void Mark2Parachute::deploy() {
	cout<<"Now deploying Mark2Parachute."<<endl;
}

