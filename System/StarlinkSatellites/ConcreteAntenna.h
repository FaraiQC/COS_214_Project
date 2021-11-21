#ifndef CONCRETEANTENNA_H
#define CONCRETEANTENNA_H
#include "Antenna.h"
#include "concreteSatellite.h"
#include <iostream>

using namespace std;

class ConcreteAntenna : public Antenna {

private:
	bool radioSignal;
	concreteSatellite* subject = new concreteSatellite();


public:
	void update();

	ConcreteAntenna();

	~ConcreteAntenna();
};

#endif
