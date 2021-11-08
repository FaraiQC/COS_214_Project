#ifndef SATELLITE_H
#define SATELLITE_H
#include "SatelliteMediator.h"
#include "Antenna.h"
#include <iostream>
using namespace std;

class Satellite {

private:
	double distance;
	Antenna* antenna;
	SatelliteMediator mediator;
	Satellite* nextS;
	Satellite* prevS;

public:
	~Satellite();

	Satellite();

	virtual Satellite* Clone() = 0;

	Satellite* nextSatellite();

	Satellite* prevSatellite();

	void attach(Antenna antenna);

	void detach(Antenna antenna);

	void notifyAntenna();

	virtual double getDistance() = 0;
};

#endif
