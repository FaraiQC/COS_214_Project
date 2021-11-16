#include "Simulation.h"
#include <iostream>

using namespace std;

Simulation::Simulation() {
	sats = new Satellite();
	spaceC = new Spacecraft();
	rkts = new Rocket();
}

Simulation::~Simulation() {
	
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
