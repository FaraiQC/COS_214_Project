#ifndef CONCRETEMEDIATOR_H
#define CONCRETEMEDIATOR_H
#include "SatelliteMediator.h"
#include <iostream>
using namespace std;

class concreteMediator : public SatelliteMediator {

public:
	Satellite** satelliteList;

	void notify();
};

#endif
