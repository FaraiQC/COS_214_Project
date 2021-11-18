#ifndef TESTSATELLITES_H
#define TESTSATELLITES_H
#include "Satellite.h"
#include "satellitesMaker.h"
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
};

#endif
