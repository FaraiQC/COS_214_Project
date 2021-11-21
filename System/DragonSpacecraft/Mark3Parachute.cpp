#include "Mark3Parachute.h"
#include <iostream>

using namespace std;

//@brief Constructor
Mark3Parachute::Mark3Parachute() {
	
}

//@brief Constructor initializes the id of the Parachute
//@param name is the id of the parachute
Mark3Parachute::Mark3Parachute(string name) {
	setId(name);
	SetMark2isCreatedChecker(1);
}

//@brief Displays that Mark3Parachute is being deployed
void Mark3Parachute::deploy() {
	cout<<"Now deploying Mark3Parachute."<<endl;
}
