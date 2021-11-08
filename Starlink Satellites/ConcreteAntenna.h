#ifndef CONCRETEANTENNA_H
#define CONCRETEANTENNA_H
#include "Antenna.h"
#include <iostream>
using namespace std;

class ConcreteAntenna : public Antenna {

private:
	bool radioSignal;
	ConcreteSatellite subject;

public:
	void update();

	ConcreteAntenna();

	~ConcreteAntenna();
};
//ksdknf
#endif
