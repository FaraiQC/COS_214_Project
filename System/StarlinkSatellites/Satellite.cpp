#include "Satellite.h"
#include <iostream>
#include "concreteMediator.h"


using namespace std;

/**
 * @brief Destroy the Satellite:: Satellite object
 * 
 */
Satellite::~Satellite() 
{

}


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


/**
 * @brief Gets the neighbouring satellite of a certain satellite
 * 
 * @return Satellite* 
 */
Satellite* Satellite::prevSatellite() 
{
	return prevS;
}


/**
 * @brief Adds/attachs a new Antenna to the antenna list (antenna connected to satellites)
 * 
 * @param a 
 */
void Satellite :: attach(Antenna* a) 
{
	cout<<"10 000 new Antennas have been successfully attached to the Antennas list.\n";
	antenna.push_back(a);
}


/**
 * @brief Removes/dettachs an Antenna to the antenna list (antenna connected to satellites)
 * 
 * @param a 
 */
void Satellite::detach(Antenna* a) 
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

//@brief 

/**
 * @brief Switches on radio radio signals to allow commnication between Antennas and satellites, and notifies the Antennas
 * 
 */
void Satellite::notifyAntenna() 
{
	vector<Antenna*>::iterator it = antenna.begin();
	for (it = antenna.begin(); it < antenna.end(); ++it)
	{
		(*it)->update();
	}
	cout<<"Configuration done! All Antenna's Radio signals, set to ON."<<endl;

}


/**
 * @brief Notifies the system that one or more Satellites have moved out of position
 * 
 */
void Satellite :: satellitesMoved()
{
	cout<<"One or more satellites have moved, Notifying the system!"<<endl;
	mediator -> notify();
	
}

/**
 * @brief Get the Distance object
 * 
 * @return double 
 */
double Satellite :: getDistance()
{
	return this->distance;
}

/**
 * @brief Get the Dist object
 * 
 * @return double 
 */
double Satellite :: getDist()
{
	return this->distance;
}

/**
 * @brief Set the Dist object
 * 
 * @param d 
 */
void Satellite ::  setDist(double d)
{
	this->distance = d;
}
