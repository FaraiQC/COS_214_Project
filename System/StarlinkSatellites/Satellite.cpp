#include "Satellite.h"
#include <iostream>
#include "concreteMediator.h"


using namespace std;


/**
 * @brief Destroy the Satellite:: Satellite object
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 * 
 */
Satellite::~Satellite() {

}


/**
 * @brief Sets Iterator variables to NULL and create a new instance of mediator
 */
Satellite::Satellite() {
	nextS = NULL;
	prevS = NULL;

	this-> distance = 0.0;

	mediator = new concreteMediator();
}


/**
 * @brief Gets the neighbouring satellite of a certain satellite
 * 
 * @return Satellite* :-next Satellites
 */
Satellite* Satellite::nextSatellite() {
	return nextS;
}


/**
 * @brief Clones a satellite
 * 
 * @return Satellite* :-clone
 */
Satellite* Satellite::Clone() {
	return new Satellite();
}


/**
 * @brief Gets the neighbouring satellite of a certain satellite
 * 
 * @return Satellite* :-previous satellite
 */
Satellite* Satellite::prevSatellite() 
{
	return prevS;
}

//@brief 

/**
 * @brief Adds/attaches a new Antenna to the antenna list (antenna connected to satellites)
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 */
void Satellite::attach(Antenna* a) {
	antenna.push_back(a);

	std::cout
		<< "\n\t\tCONNECTIONS MADE\n"
		<< "\n\t\t\tA total number of 10 000 Antennas\n"
		<< std::endl;
}


/**
 * @brief Removes/detaches an Antenna to the antenna list (antenna connected to satellites)
 * 
 * @param a :-Antenna to attach
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 */
void Satellite::detach(Antenna* a) {
	std::cout
		<< "\n\t\tDISCONNECTIONS MADE\n"
		<< "\n\t\t\tA total number of 10 000 Antennas\n"
		<< std::endl;

	bool found = false;
	vector<Antenna*>::iterator it = antenna.begin();
	while((it != antenna.end()) && (!found)){
		if (*it == a){
			found = true;
			antenna.erase(it);
		}
		++it;
	}
}

//@brief 

/**
 * @brief switches on radio radio signals to allow commnication between Antennas and satellites,
 * 		  and notifies the Antennas
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 */
void Satellite::notifyAntenna() {
	vector<Antenna*>::iterator it = antenna.begin();
	for (it = antenna.begin(); it < antenna.end(); ++it)
	{
		(*it)->update();
	}
	
	std::cout
		<< "\n\t\tCONFIGURATION COMPLETE\n"
		<< "\t\t\tAll Antenna's Radio signals, set to ON"
		<< std::endl;
}

//@brief n

/**
 * @brief Notifies the system that one or more Satellites have moved out of position
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 * 
 */
void Satellite::satellitesMoved(){
	std::cout
		<< "\n\t\tSATELLITES DRIFTED\n"
		<< "\t\t\tNotifying the system"
		<< std::endl;

	mediator -> notify();
	
}

/**
 * @brief Get the Distance object
 * 
 * @return double :-the distance between a satellite and the neighbouring satellites
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 */
double Satellite::getDistance(){
	return this->distance;
}


/**
 * @brief Get the Dist object
 * 
 * @return double :-the distance between a satellite and the neighbouring satellites
 */
double Satellite::getDist(){
	return this->distance;
}


/**
 * @brief Set the Dist object
 * 
 * @param d :-distance between a satellite and the neighbouring satellites
 */
void Satellite::setDist(double d){
	this->distance = d;
}


/**
 * @brief FINAL EDIT CREDS
 * 
 * @author Malope Elphus (u20451696)
 * 
 */