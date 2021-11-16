#ifndef TESTSATELLITES_H
#define TESTSATELLITES_H
#include "../StarlinkSatellites/Satellite.h"

class TestSatellites {

private:
	Satellite* satellites;

public:
	TestSatellites();

	~TestSatellites();

	void BeforeLaunch();

	void InDesiredOrbit();
};

#endif
