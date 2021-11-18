#ifndef DRAGONSPACECRAFT_H
#define DRAGONSPACECRAFT_H
#include "Spacecraft.h"
#include "Cargo.h"
#include <string>
#include <vector>

using namespace std;

class DragonSpacecraft :public Spacecraft {
	private:
		double currentHeight;
	public:
		DragonSpacecraft();
		~DragonSpacecraft();
		double getCurrentWeight();
		void loadCargo(Cargo* cargo);
		void removeCargo(int index);
		double getCurrentHeight();
		void setCurrentHeight(double currentHeight);
};
#endif
