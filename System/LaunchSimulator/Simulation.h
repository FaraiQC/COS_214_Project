#ifndef SIMULATION_H
#define SIMULATION_H
#include <vector>


#include "../StarlinkSatellites/Satellite.h"
#include "../DragonSpacecraft/code/Spacecraft.h"
#include "../FalconRockets/Rocket.h"

class Simulation {

private:
	vector<Satellite*> satellites;
	vector<Spacecrafts*> spacecrafts;
	vector<Falcon*> falcon;
	vector<Falcon*> FinalSimulations;

public:
	Simulation();

	~Simulation();

	void testSimulation();

	void assembleRocket();

	void Launch();

	void Launch(int int_t);
};

#endif
