#ifndef SATELLITE_H
#define SATELLITE_H
#include "Antenna.h"
#include "SatelliteMediator.h"
#include <iostream>
#include <vector>

class SatelliteMediator;

using namespace std;

class Satellite {

private:
	double distance;
	vector<Antenna*> antenna;
	SatelliteMediator* mediator;


public:
	~Satellite();

	Satellite();

	Satellite* nextS ;
	Satellite* prevS ;

	virtual Satellite* Clone();

	Satellite* nextSatellite();

	Satellite* prevSatellite();

	void attach(Antenna* a);

	void detach(Antenna* a);

	void notifyAntenna();

	virtual double getDistance();

	double getDist();
	
};

#endif
