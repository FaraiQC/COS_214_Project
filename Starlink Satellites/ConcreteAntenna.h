#ifndef CONCRETEANTENNA_H
#define CONCRETEANTENNA_H
#include "Antenna.h"

class ConcreteAntenna : public Antenna {

private:
	bool radioSignal;
	ConcreteSatellite subject;

public:
	void update();

	ConcreteAntenna();

	~ConcreteAntenna();
};

#endif
