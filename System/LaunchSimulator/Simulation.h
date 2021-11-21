#ifndef SIMULATION_H
#define SIMULATION_H
#include <vector>

#include "TestSatellites.h"
#include "../DragonSpacecraft/Spacecraft.h"
#include "../FalconRockets/Rocket.h"
#include "TestRockets.h"
#include "TestSpacecraft.h"

class Simulation {

private:
	vector<satellitesMaker*> satellites;
	vector<Spacecraft*> spacecrafts;
	vector<Rocket*> falcons;
	vector<Rocket*> FinalSimulations;

	//pointers
	TestSatellites* sats;
	TestSpacecraft* spaceC;
	TestRockets* rkt;

	int falconIndex;
	int _list;
	int count;


public:
	Simulation();

	~Simulation();

	void testSimulation();

	void assembleRocket();

	void Launch();

	void Launch(int int_t);
};

#endif
