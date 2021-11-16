#ifndef TESTROCKETS_H
#define TESTROCKETS_H

class TestRockets {

private:
	Rocket* rkt;

public:
	TestRockets();

	~TestRockets();

	void Before_Launch();

	void ReleaseSatellites();

	void ReleaseSpacecraft();

	void AfterLaunch();

	void Before_Launch();
};

#endif
