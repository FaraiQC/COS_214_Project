#ifndef ANTENNA_H
#define ANTENNA_H
#include <iostream>
using namespace std;

class Antenna {


public:
	virtual void update() = 0;

	Antenna();

	~Antenna();
};

#endif
