#ifndef CONCRETESATELLITE_H
#define CONCRETESATELLITE_H
#include "Satellite.h"

class concreteSatellite :public Satellite
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
