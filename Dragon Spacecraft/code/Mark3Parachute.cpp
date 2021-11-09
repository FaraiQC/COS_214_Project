#include "Mark3Parachute.h"
#include <iostream>

using namespace std;

Mark3Parachute::Mark3Parachute() {
	
}

void Mark3Parachute::deploy() {
	cout<<"Now deploying Mark3Parachute."<<endl;
}

int Mark3Parachute::calculateSuccessRate() {
	return 10;
}
void Mark3Parachute::setStoppingPower(int stoppingPower)
{
	this->stoppingPower=stoppingPower;
}

int Mark3Parachute::getStoppingPower()
{
	return stoppingPower;
}
