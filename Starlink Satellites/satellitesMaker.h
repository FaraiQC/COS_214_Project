#ifndef SATELLITESMAKER_H
#define SATELLITESMAKER_H

class satellitesMaker {

private:
	Satellite* first;
	bool empty = false;

public:
	satellitesMaker();

	void CollectNextCluster();

	void isEmpty();
};

#endif
