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
	int getCurrtHight_crewDragon();
	void setCurrtHight_crewDragon(int currtHight_crewDragon);


};

#endif
