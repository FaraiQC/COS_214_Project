#include "Mark2Parachute.h"
#include <stdlib.h>
#include <ctime>
#include <iostream>

using namespace std;

Mark2Parachute::Mark2Parachute() {

}

Mark2Parachute::Mark2Parachute(string name) {
	setId(name);
	SetMark2isCreatedChecker(1);
}
void Mark2Parachute::deploy() {
	cout<<"Now deploying Mark2Parachute."<<endl;
}

