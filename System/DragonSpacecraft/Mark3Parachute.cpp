#include "Mark3Parachute.h"
#include <iostream>

using namespace std;

Mark3Parachute::Mark3Parachute() {
	
}

Mark3Parachute::Mark3Parachute(string name) {
	setId(name);
	SetMark2isCreatedChecker(0);
}

void Mark3Parachute::deploy() {
	cout<<"Now deploying Mark3Parachute."<<endl;
}
