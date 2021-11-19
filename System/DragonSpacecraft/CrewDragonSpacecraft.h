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
		double getCurrentWeight();
		double getCurrentHeight();
		void setCurrentHeight(double currentHeight);
		void crewInfo();
		int getTotalNumCrewMember();
		vector<CrewMember*> getCrewList();
};
#endif
