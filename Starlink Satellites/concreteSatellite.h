#ifndef CONCRETESATELLITE_H
#define CONCRETESATELLITE_H

class concreteSatellite : Satellite {

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
