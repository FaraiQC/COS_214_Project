#ifndef SPACERAFT_H
#define SPACERAFT_H
#include <vector>
#include <string>
#include "Parachute.h"
#include "Thruster.h"
#include "ParachuteSystemObserver.h"
// #include "Mark3ParachuteSystemObserver.h"
// #include "Mark2ParachuteSystemObserver.h"
#include "Cargo.h"
#include "CrewMember.h"
#include <algorithm>
#include <unistd.h>         //for sleep
// #include "LaunchSpacecraft.h"

class Spacecraft {
	private:
		vector<ParachuteSystemObserver*> observerList;
		vector<Parachute*> parachuteList;
		vector<Thruster*> thrustersList;
		vector<Cargo*> cargoList;
		// LaunchSpacecraft* launch;



		double maxWeightToEarth;
		double maxWeightToOrbit;
		string currentLocation;
		string destination;
		int CurrentHightFromGround;
		vector<ParachuteSystemObserver*> parachute_obsecerList;
		int reused;	
		int parachuteChecker;
		int ThrusterChecker;
		int checkSpacecraft;
		bool IsCrewDragon;
		string theUnloudedloadedStuff;
		

	public:
		Spacecraft();
		virtual double getCurrentWeight()=0;
		void setCurrentLocation(string location);
		string getCurrentLocation();
		void setDestination(string destination);
		string getDestination();
		double getWeightToOrbit();
		void setWeightToOrbit(double weight);	//we have to delete this
		double getWeightToEarth();
		virtual void goToDestination();
		void notify();
		void attach(ParachuteSystemObserver* obj);
		void detach(ParachuteSystemObserver* obj);
		void missionComplete();
		void attachThruster(Thruster* thruster);
		void detachThruster();
		void attachCargo(Cargo* cargo);
		void detachCargo(int index);
		void attachParachute(Parachute* parachute);
		void detachParachute();
		virtual double getCurrentHeight();
		virtual void setCurrentHeight(double currenttHeight);
		void print();
		double TotalPowerOfThrusters();
		virtual void enterCrewMember(CrewMember*);
		virtual void removeCrewMember(int);
		virtual void crewInfo();
		virtual	int getTotalNumCrewMember();
		bool IsSpcacecraftInOptimum();
		void launch();
		vector<Cargo*> getCargoList();
		virtual vector<CrewMember*> getCrewList();
		bool isCrewDragon();
		void setIsCrewDragon(bool IsCrewDragon);
		void Unloading();
};
#endif
