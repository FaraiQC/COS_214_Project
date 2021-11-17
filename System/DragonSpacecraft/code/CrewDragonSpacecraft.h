#ifndef CREWDRAGONSPACECRAFT_H
#define CREWDRAGONSPACECRAFT_H
#include "Spacecraft.h"
#include "Cargo.h"
#include "CrewMember.h"

using namespace std;

class CrewDragonSpacecraft :public Spacecraft {
	private:
		vector<CrewMember*> spacecraftCrew;
		int currentHeight;
		int NumCrewMember;

	public:
		CrewDragonSpacecraft();
		~CrewDragonSpacecraft();
		void enterCrewMember(CrewMember*);
		void removeCrewMember(int index);
		double currentWeight();
		int getCurrentHeight();
		void setCurrentHeight(int currtHight);
		void crewInfo();
		int getTotalNumCrewMember();
		vector<CrewMember*> getCrewList();
};
#endif
