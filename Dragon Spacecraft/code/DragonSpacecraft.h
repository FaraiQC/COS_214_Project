#ifndef DRAGONSPACECRAFT_H
#define DRAGONSPACECRAFT_H
#include "Spacecraft.h"
#include "Cargo.h"
#include <string>
#include <vector>

using namespace std;

class DragonSpacecraft :public Spacecraft {

private:
	vector<Cargo*> spacecraftCargo;
	int* currentHight_Dragon;

public:
	DragonSpacecraft();
	~DragonSpacecraft();
	double currentWeight();
	void loadCargo(Cargo* cargo);
	void removeCargo(Cargo* cargo);
	
	int getCurrtHight();
	void setCurrtHight(int currtHight);
};
#endif
