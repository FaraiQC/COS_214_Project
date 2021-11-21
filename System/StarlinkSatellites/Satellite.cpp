#include "Satellite.h"
#include <iostream>
#include "concreteMediator.h"


using namespace std;

Satellite :: ~Satellite() 
{

}

Satellite :: Satellite() 
{
	nextS = NULL;
	prevS = NULL;

	this-> distance = 0.0;

	mediator = new concreteMediator();
}

Satellite* Satellite :: nextSatellite() 
{
	return nextS;
}
Satellite* Satellite :: Clone() 
{
	return new Satellite();
}

Satellite* Satellite :: prevSatellite() 
{
	return prevS;
}

void Satellite :: attach(Antenna* a) 
{
	cout<<"10 000 new Antennas have been successfully attached to the Antennas list.\n";
	antenna.push_back(a);
}

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

void Satellite :: notifyAntenna() 
{
	vector<Antenna*>::iterator it = antenna.begin();
	for (it = antenna.begin(); it < antenna.end(); ++it)
	{
		(*it)->update();
	}
	cout<<"Configuration done! All Antenna's Radio signals, set to ON."<<endl;

}

void Satellite :: satellitesMoved()
{
	cout<<"One or more satellites have moved, Notifying the system!"<<endl;
	mediator -> notify();
	
}

double Satellite :: getDistance()
{
	return this->distance;
}

double Satellite :: getDist()
{
	return this->distance;
}

void Satellite ::  setDist(double d)
{
	this->distance = d;
}
