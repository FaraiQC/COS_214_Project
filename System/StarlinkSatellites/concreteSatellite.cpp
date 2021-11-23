#include "concreteSatellite.h"
#include <iostream>

using namespace std;



/**
 * @brief Construct a new concrete Satellite::concrete Satellite object
 * 		  Sets radio Signal to true (switching it on)
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 * 
 */
concreteSatellite::concreteSatellite()  : Satellite() {
	this->setSignal();
}

/**
 * @brief Sets the distance between each satellite to 0.1km
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 * 
 */
void concreteSatellite::setDistance() {
	setDist(0.1);
}


/**
 * @brief clones a satellite
 * 
 * @return Satellite* :-new Satellite and with local state copied
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 */
Satellite* concreteSatellite::Clone() {
	return new Satellite();
}


/**
 * @brief Returns the current state of the satelliteSignal
 * 
 * @return true :-if(there is signal)
 * @return false :-if(otherwise)
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 */
bool concreteSatellite::getSignal() {	
	// setSignal();
	return this->satelliteSignal;
}


/**
 * @brief Switches on the SatelliteSignal of the satellite
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 * 
 */
void concreteSatellite::setSignal() {
	this->satelliteSignal = true; //On
}


/**
 * @brief Returns the distance to the satellites nearest neighbouring Satellite
 * 
 * @return double :-distance
 */
double concreteSatellite::getDistance() {
	return getDist();
}


/**
 * @brief FINAL EDIT CREDS
 * 
 * @author Malope Elphus (u20451696)
 * 
 */