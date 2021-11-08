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

}

void Satellite :: detach(Antenna* a) 
{

}

void Satellite :: notifyAntenna() 
{
	cout<<"Radio Signal for atleast One Satellite has bee turned of, Notifying the Antenna!"<<endl;
	antenna -> update();
}

void Satellite :: SatellitesMoved()
{
	cout<<"One or more satellites have moved, Notifying the system!"<<endl;
	mediator -> notify();
	
}
