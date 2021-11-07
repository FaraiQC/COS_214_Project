#ifndef SATELLITEMEDIATOR_H
#define SATELLITEMEDIATOR_H

class SatelliteMediator {


public:
	virtual void notify(Satellite** satelliteList) = 0;

	SatelliteMediator();

	~SatelliteMediator();
};

#endif
