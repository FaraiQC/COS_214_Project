#ifndef SPACERAFT_H
#define SPACERAFT_H
#include <vector>
#include <string>
#include "Parachute.h"
#include "Thruster.h"
#include "ParachuteSystemObserver.h"
#include "Cargo.h"
#include "CrewMember.h"
#include <algorithm>

class Spacecraft {
	private:
		vector<ParachuteSystemObserver*> observerList;
		vector<Parachute*> parachuteList;
		vector<Thruster*> thrustersList;
		vector<Cargo*> cargoList;
		double maxWeightToEarth;
		double maxWeightToOrbit;
		string currentLocation;
		string destination;
		int CurrentHightFromGround;
		vector<ParachuteSystemObserver*> parachute_obsecerList;
		int reused;	

	public:
		Spacecraft();
		virtual double currentWeight()=0;
		void setCurrentLocation(string location);
		string getCurrentLocation();
		void setDestination(int destination);
		double getWeightToOrbit();
		void setWeightToOrbit(double weight);
		double getWeightToEarth();
		virtual void goToDestination();
		void notify();
		void attach(ParachuteSystemObserver* obj);
		void detach(ParachuteSystemObserver* obj);
		void missionComplete();
		void attach(Thruster* thruster);
		void detach(Thruster* thruster);


};
#endif
