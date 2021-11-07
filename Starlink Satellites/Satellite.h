#ifndef SATELLITE_H
#define SATELLITE_H

class Satellite {

private:
	double distance;
	Antenna* Antena;
	SatelliteMediator mediator;

public:
	~Satellite();

	Satellite();

	virtual Satellite* Clone() = 0;

	Satellite* nextSatellite();

	Satellite* prevSatellite();

	void attach(Antenna antenna);

	void detach(Antenna antenna);

	void notifyAntenna();

	virtual double getDistance() = 0;
};

#endif
