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


	this->falcons     = rkt->testRockets();
	this->satellites  = sats->testSatellites();
	this->spacecrafts = spaceC->testSpacecrafts();


	

}

void Simulation::assembleRocket() {
	// TODO - implement Simulation::assembleRocket
	throw "Not yet implemented";
}

void Simulation::Launch() {
	
	int ActSimNum=0;

	// pointers
	cout<<"Running all actual Simulations ... \n";

	Rocket* r = FinalSimulations.at(ActSimNum);

	while(r != 	NULL)
	{
		cout<<"             Actual Simulation "<< (++ActSimNum)<<"\n";
		cout<<"=========================================================================================\n";

		// cout<<"Launch setUp taking place..."

			// rkt->Before_Launch();
			if(r.hasSatellites() == true)
			{
				sats->BeforeLaunch();

			}

			if(r.hasSpacecraft() == true)
			{
				spaceC->BeforeLaunch();
			}

			//Everything has left the ground
			rkt->AfterLaunch();

			rkt->ReleaseSatellites();
			sats->InDesiredOrbit();
			
			rkt->ReleaseSpacecraft();
			spaceC->Released();

			sats->SatellitesAuntentication();
			rkt->AfterLaunch();
			
		cout<<"Actual Simulation "<<ActSimNum<<" done.\n";

		r = FinalSimulations.at(ActSimNum);
		
	}
}

void Simulation::Launch(int i) {
	
	int ActSimNum=0;
	int stop = 0 ;

	// pointers
	cout<<"Running "<<i<< " actual Simulations ... \n";

	Rocket* r = FinalSimulations.at(ActSimNum);

	while((r != NULL) || (stop != i))
	{
		cout<<"             Actual Simulation "<< (++ActSimNum)<<"\n";
		cout<<"=========================================================================================\n";

		// cout<<"Launch setUp taking place..."

			// rkt->Before_Launch();
			if(r.hasSatellites() == true)
			{
				sats->BeforeLaunch();

			}

			if(r.hasSpacecraft() == true)
			{
				spaceC->BeforeLaunch();
			}

			//Everything has left the ground
			rkt->AfterLaunch();

			rkt->ReleaseSatellites();
			sats->InDesiredOrbit();
			
			rkt->ReleaseSpacecraft();
			spaceC->Released();

			sats->SatellitesAuntentication();
			rkt->AfterLaunch();
			
		cout<<"Actual Simulation "<<ActSimNum<<" done.\n";

		r = FinalSimulations.at(ActSimNum);
		stop++;
	}
}
