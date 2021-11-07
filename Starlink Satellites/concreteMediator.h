#ifndef CONCRETEMEDIATOR_H
#define CONCRETEMEDIATOR_H

class concreteMediator : SatelliteMediator {

public:
	Satellite** satelliteList;

	void notify(Satellite** satelliteList);
};

#endif
