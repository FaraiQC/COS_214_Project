#ifndef TESTSATELLITES_H
#define TESTSATELLITES_H
#include "../StarlinkSatellites/Satellite.h"
#include "../StarlinkSatellites/satellitesMaker.h"
#include <vector>

class TestSatellites {

private:
	Satellite* satellites;
	vector<satellitesMaker*> satsMaker;

public:
	TestSatellites();

	~TestSatellites();  

	void testSatellites();

	void BeforeLaunch();

	void InDesiredOrbit();
};

#endif
