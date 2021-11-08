#include "concreteSatellite.h"
#include <iostream>

using namespace std;

concreteSatellite::concreteSatellite() 
{
	
}

void concreteSatellite::setDistance() 
{
	this->distance = 0.1 ;
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

void concreteSatellite::getDistance() 
{
	return this->distance ;
