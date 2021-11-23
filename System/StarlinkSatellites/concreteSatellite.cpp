#include "concreteSatellite.h"
#include <iostream>

using namespace std;

//@brief Sets radio Signal to true (switching it on)

/**
 * @brief Construct a new concrete Satellite::concrete Satellite object
 * 
 */
concreteSatellite::concreteSatellite()  : Satellite()
{
	this->setSignal();
}

//@brief Sets the distance between each satellite to 0.1km

/**
 * @brief Sets the distance
 * 
 */
void concreteSatellite::setDistance() 
{
	setDist(0.1);
}

//@brief clones a satellite
//@return returns a cloned satellite

/**
 * @brief Creates a clone
 * 
 * @return Satellite* 
 */
Satellite* concreteSatellite::Clone() 
{
	return new Satellite();
}

/**
 * @brief Gets the satellite signal
 * 
 * @return true 
 * @return false 
 */
bool concreteSatellite::getSignal() 
{	
	// setSignal();
	return this->satelliteSignal;
}

/**
 * @brief sets the signal of a satellite
 * 
 */
void concreteSatellite::setSignal() 
{
	this->satelliteSignal = true; //On
}


/**
 * @brief Get the distance
 * 
 * @return double 
 */
double concreteSatellite::getDistance() 
{
	return getDist();
}
