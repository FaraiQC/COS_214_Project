#include "Satellite.h"
#include <iostream>

using namespace std;

Satellite :: ~Satellite() 
{

}

Satellite :: Satellite() 
{
	this-> distance = 0.0;
}

Satellite* Satellite :: nextSatellite() 
{
	return nextS;
}

Satellite* Satellite :: prevSatellite() 
{
	return prevS;
}

void Satellite :: attach(Antenna* a) 
{
	antenna.push_back(a);
}

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

void Satellite :: notifyAntenna() 
{
	cout<<"Some Satellite's Radio Signals have been turned off, Notifying the Antenna!"<<endl;
	vector<Antenna*>::iterator it = antenna.begin();
	for (it = antenna.begin(); it < antenna.end(); ++it)
	{
		(*it)->update();
	}
}

void Satellite :: SatellitesMoved()
{
	cout<<"One or more satellites have moved, Notifying the system!"<<endl;
	mediator -> notify();
	
}
