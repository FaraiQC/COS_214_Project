#ifndef SATELLITEMEDIATOR_H
#define SATELLITEMEDIATOR_H
#include "Satellite.h"
#include <iostream>

using namespace std;

class SatelliteMediator {


public:
	virtual void notify() = 0;

	SatelliteMediator();

	~SatelliteMediator();
};

#endif
