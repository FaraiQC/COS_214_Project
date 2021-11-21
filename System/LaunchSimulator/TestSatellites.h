#ifndef TESTSATELLITES_H
#define TESTSATELLITES_H
#include "../StarlinkSatellites/concreteMediator.h"
#include "../StarlinkSatellites/ConcreteAntenna.h"
#include "../StarlinkSatellites/Antenna.h"
#include "../StarlinkSatellites/SatelliteMediator.h"
#include "../StarlinkSatellites/satellitesMaker.h"
#include "../StarlinkSatellites/Satellite.h"
#include <vector>

class TestSatellites {


private:
	Satellite* satellites;
	vector<satellitesMaker*> satsMaker;
	int random ;
	int random1;
	int total = 0;

public:
	TestSatellites();

	~TestSatellites();  

	vector<satellitesMaker*> testSatellites();

	void BeforeLaunch();

	void InDesiredOrbit();

	void SatellitesAuntentication();

	void launch();
};

#endif
