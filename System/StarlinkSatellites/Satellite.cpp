#include "Satellite.h"
#include <iostream>

using namespace std;


//@brief Destructor
Satellite :: ~Satellite() 
{

}


//@brief Sets null and zero values
Satellite :: Satellite() 
{
	nextS = NULL;
	prevS = NULL;

	this-> distance = 0.0;
}


//@brief Returns nextS
Satellite* Satellite :: nextSatellite() 
{
	return nextS;
}


//@brief Clones the satellite
Satellite* Satellite :: Clone() 
{
	return new Satellite();
}


//@brief Returns prevS
Satellite* Satellite :: prevSatellite() 
{
	return prevS;
}


//@brief Attaches an Antenna to an antenna vector
//@param a is the Antenna that you want to attach to the antenna vector
void Satellite :: attach(Antenna* a) 
{
	antenna.push_back(a);
}


//@brief Detaches an Antenna from the antenna vector
//@param a is the Antenna that you want to detach from the antenna vector
void Satellite :: detach(Antenna* a) 
{
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


//@brief Updates all the Antennae and switches on all their radio signals
void Satellite :: notifyAntenna() 
{
	vector<Antenna*>::iterator it = antenna.begin();
	for (it = antenna.begin(); it < antenna.end(); ++it)
	{
		(*it)->update();
	}
	cout<<"Configuration done! All Antenna's Radio signals, set to ON."<<endl;

}


//@brief Notifies the mediator when  at least one satellite moves out of position. The mediator repositions the satellites so that they are in the correct positions and are spread out evenly. Then it switches off all the satellites lasers
void Satellite :: SatellitesMoved()
{
	cout<<"One or more satellites have moved, Notifying the system!"<<endl;
	mediator -> notify();
	
}


//@brief returns distance
double Satellite :: getDistance()
{
	return this->distance;
}


//@brief returns distance
double Satellite :: getDist()
{
	return this->distance;
}


//@brief Sets the distance
//@param d is the distance that is to be set
void Satellite ::  setDist(double d)
{
	this->distance = d;
}
