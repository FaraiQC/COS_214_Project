#include "Simulation.h"

Simulation::Simulation() {
	
}

Simulation::~Simulation() {
	// TODO - implement Simulation::~Simulation
	throw "Not yet implemented";
}

void Simulation::testSimulation() {
	this->satellites = sats->testSatellites();
	this->spacecrafts = spaceC->testSpacecrafts();
	this->falcons = rkt->testRockets();
}

void Simulation::assembleRocket() {
	// TODO - implement Simulation::assembleRocket
	throw "Not yet implemented";
}

void Simulation::Launch() {
	// TODO - implement Simulation::Launch
	throw "Not yet implemented";
}

void Simulation::Launch(int int_t) {
	// TODO - implement Simulation::Launch
	throw "Not yet implemented";
}
