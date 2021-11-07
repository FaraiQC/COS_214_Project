#ifndef SATELLITESMAKER_H
#define SATELLITESMAKER_H

class satellitesMaker {

private:
	Satellite* first;

public:
	satellitesMaker();

	void CollectNextCluster();

	void isEmpty();
};

#endif
