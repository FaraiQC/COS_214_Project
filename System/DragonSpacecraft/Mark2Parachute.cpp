#include "Mark2Parachute.h"
#include <stdlib.h>
#include <ctime>
#include <iostream>

using namespace std;

//@brief Constructor
Mark2Parachute::Mark2Parachute() {

}

//@brief Sets the ID of the Parachute and checks that it is created, which it is.
//@param name is the ID of the Parachute
Mark2Parachute::Mark2Parachute(string name) {
	setId(name);
	SetMark2isCreatedChecker(1);
}

//@brief Displays that Mark2Parachute is now being deployed
void Mark2Parachute::deploy() {
	cout<<"Now deploying Mark2Parachute."<<endl;
}

