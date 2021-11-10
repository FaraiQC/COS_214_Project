#ifndef CREWDRAGONSPACECRAFT_H
#define CREWDRAGONSPACECRAFT_H
#include "Spacecraft.h"
#include "Cargo.h"
#include "CrewMember.h"
using namespace std;
class CrewDragonSpacecraft :public Spacecraft {

private:
	vector<CrewMember*> spacecraftCrew;
	vector<Cargo*> spacecraftCargo;
	int currtHight_crewDragon;

public:
	CrewDragonSpacecraft();
	~CrewDragonSpacecraft();
	void setCurrentLocation(string location);
	double currentWeight();
	int getCurrtHight();
	void setCurrtHight(int currtHight);


};

#endif
