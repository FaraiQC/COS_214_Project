#include "Simulation.h"
#include <iostream>

using namespace std;

Simulation::Simulation() {
	sats = new TestSatellites();
	// spaceC = new Spacecraft();
	// rkts = new Rocket();
}

Simulation::~Simulation() {

}

void Simulation::testSimulation() {


	// this->falcons     = rkt->testRockets();
	this->satellites  = sats->testSatellites();
	// this->spacecrafts = spaceC->testSpacecrafts();

	

}

void Simulation::assembleRocket() {
	// TODO - implement Simulation::assembleRocket
	throw "Not yet implemented";
}

void Simulation::Launch() {
	
	TestSatellites* tSatellites = new TestSatellites();

    cout<<"\n===================================================== \n";
    cout<<"                    Actual Launch\n";
    cout<<"=======================================================\n\n";

    tSatellites->BeforeLaunch();
    cout<<"\n";
    tSatellites->InDesiredOrbit();
    tSatellites->SatellitesAuntentication();
}

void Simulation::Launch(int i) {
	
	
}
