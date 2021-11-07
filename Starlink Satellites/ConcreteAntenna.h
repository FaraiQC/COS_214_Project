#ifndef CONCRETEANTENNA_H
#define CONCRETEANTENNA_H

class ConcreteAntenna : Antenna {

private:
	bool radioSignal;
	ConcreteSatellite subject;

public:
	void update();

	ConcreteAntenna();

	~ConcreteAntenna();
};

#endif
