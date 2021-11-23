#include "Satellite.h"
#include <iostream>
#include "concreteMediator.h"


using namespace std;

//@brief Destructor

/**
 * @brief Destroy the Satellite:: Satellite object
 * 
 */
Satellite::~Satellite() 
{

}

//@brief sets Iterator variables to NULL and create a new instance of mediator

/**
 * @brief Construct a new Satellite:: Satellite object
 * 
 */
Satellite::Satellite() 
{
	nextS = NULL;
	prevS = NULL;

	this-> distance = 0.0;

	mediator = new concreteMediator();
}

//@brief gets the neighbouring satellite of a certain satellite
//@return the neighbouring Satellite of a given satellite

/**
 * @brief Returns the next
 * 
 * @return Satellite* 
 */
Satellite* Satellite::nextSatellite() 
{
	return nextS;
}

//@brief returns a clone of a Satellite
//@return a cloned Satellite
Satellite* Satellite :: Clone() 
{
	return new Satellite();
}

//@brief gets the neighbouring satellite of a certain satellite
//@return the neighbouring Satellite of a given satellite
Satellite* Satellite :: prevSatellite() 
{
	return prevS;
}

//@brief adds/attachs a new Antenna to the antenna list (antenna connected to satellites)
void Satellite :: attach(Antenna* a) 
{
	cout<<"10 000 new Antennas have been successfully attached to the Antennas list.\n";
	antenna.push_back(a);
}

//@brief removes/dettachs an Antenna to the antenna list (antenna connected to satellites)
void Satellite :: detach(Antenna* a) 
{
	cout<<"100 Antennas have been disconected from the satellites.\n";
	bool found = false;
	vector<Antenna*>::iterator it = antenna.begin();
	while((it != antenna.end()) && (!found))
	{
		if (*it == a)
		{
			found = true;
			antenna.erase(it);
		}
		++it;
	}
}

//@brief switches on radio radio signals to allow commnication between Antennas and satellites, and notifies the Antennas
void Satellite :: notifyAntenna() 
{
	vector<Antenna*>::iterator it = antenna.begin();
	for (it = antenna.begin(); it < antenna.end(); ++it)
	{
		(*it)->update();
	}
	cout<<"Configuration done! All Antenna's Radio signals, set to ON."<<endl;

}

//@brief notifies the system that one or more Satellites have moved out of position
void Satellite :: satellitesMoved()
{
	cout<<"One or more satellites have moved, Notifying the system!"<<endl;
	mediator -> notify();
	
}

//@brief gets the distsance between a satellite and the neighbouring satellites
//@return the distance between a satellite and the neighbouring satellites
double Satellite :: getDistance()
{
	return this->distance;
}

//@brief gets the distsance between a satellite and the neighbouring satellites
//@return the distance between a satellite and the neighbouring satellites
double Satellite :: getDist()
{
	return this->distance;
}

//@brief sets distance between a satellite and the neighbouring satellites
void Satellite ::  setDist(double d)
{
	this->distance = d;
}
