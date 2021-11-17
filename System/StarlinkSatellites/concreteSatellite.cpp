#include "concreteSatellite.h"
#include <iostream>

using namespace std;

//@brief Sets radio Signal to true (switching it on)
concreteSatellite::concreteSatellite() 
{
	this->setSignal();
}

//@brief Sets the distance between each satellite to 0.1km
void concreteSatellite::setDistance() 
{
	setDist(0.1);
}

//@brief clones a satellite
//@return returns a cloned satellite
Satellite* concreteSatellite::Clone() 
{
	return new Satellite();
}

//@brief returns the current state of the satelliteSignal
//@return returns the current state of the satelliteSignal
bool concreteSatellite::getSignal() 
{
	return this->satelliteSignal;
}

//@brief Switches on the SatelliteSignal of the satellite
void concreteSatellite::setSignal() 
{
	this->satelliteSignal = true; //On
}

//@brief returns the distance to the satellites nearest neighbouring Satellite
//@return returns the distance to the satellites nearest neighbouring Satellite
double concreteSatellite::getDistance() 
{
	return getDist();
}
