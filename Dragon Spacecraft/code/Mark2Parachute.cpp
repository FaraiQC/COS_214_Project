#include "Mark2Parachute.h"
#include <stdlib.h>
#include <ctime>
Mark2Parachute::Mark2Parachute() {
	
}

void Mark2Parachute::deploy() {
	cout<<"Now deploying Mark2Parachute."<<endl;
}

int Mark2Parachute::calculateSuccessRate() {
	int SuccessRate= 0 + (rand() % 10);
	return SuccessRate;
}

void Mark2Parachute::setStoppingPower(int stoppingPower)
{
	this->stoppingPower=stoppingPower;
}

int Mark2Parachute::getStoppingPower()
{
	return stoppingPower;
}

