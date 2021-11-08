#ifndef CONCRETESATELLITE_H
#define CONCRETESATELLITE_H
#include "Satellite.h"
#include <iostream>
using namespace std;

class concreteSatellite : public Satellite
{

	public:
		bool satelliteSignal;

		concreteSatellite();

		void setDistance();

		Satellite* Clone();

		bool getSignal();

		void setSignal();

		void getDistance();
};

#endif
