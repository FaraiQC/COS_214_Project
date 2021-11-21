#include "Simulation.h"
#include <iostream>

using namespace std;

Simulation::Simulation() {
	sats = new TestSatellites();
	spaceC = new TestSpacecraft();
	rkt = new TestRockets();
	_list = 0;
	falconIndex = 0;
	count=0;
}

Simulation::~Simulation() {
	reset();//clear the simulation before going out of scope
}

void Simulation::reset()
{
	delete sats;
	delete spaceC;
	delete rkt;

	falconIndex = 0;
	satellites.clear();
	spacecrafts.clear();
	falcons.clear();
	FinalSimulations.clear();
}

void Simulation::updateFalcon_ONCE()
{
	vector<Rocket*> temp = rkt->testRockets();
	this->falcons.push_back(temp.at(count++)); 
	this->falcons.push_back(temp.at(count++));
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

    cout<<"\n=====================================================\n";
    cout<<"                    Actual Launch\n";
    cout<<"=======================================================\n\n";

    tSatellites->BeforeLaunch();
    cout<<"\n";
    tSatellites->InDesiredOrbit();
    tSatellites->SatellitesAuntentication();
}

void Simulation::Launch(int i) {
	
	
}
