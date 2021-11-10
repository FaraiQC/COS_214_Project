#include "concreteSatellite.h"
#include <iostream>

using namespace std;

concreteSatellite::concreteSatellite() 
{
	this->setSignal();
}

void concreteSatellite::setDistance() 
{
	setDist(0.1);
}

Satellite* concreteSatellite::Clone() 
{
	return new Satellite();
}

bool concreteSatellite::getSignal() 
{
	return this->satelliteSignal;
}

void concreteSatellite::setSignal() 
{
	this->satelliteSignal = true; //On
}

double concreteSatellite::getDistance() 
{
	return getDist();
}
