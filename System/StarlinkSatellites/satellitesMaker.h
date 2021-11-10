#ifndef SATELLITESMAKER_H
#define SATELLITESMAKER_H
#include "Satellite.h"

class satellitesMaker {

private:
	Satellite* first;
	bool empty;

public:
	satellitesMaker();

	void CollectNextCluster();

	bool isEmpty();
};

#endif
