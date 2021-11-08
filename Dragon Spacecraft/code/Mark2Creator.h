#ifndef MARK2CREATOR_H
#define MARK2CREATOR_H
#include "ParachuteCreator.h"
#include "Mark2Parachute.h"

class Mark2Creator :public ParachuteCreator {


public:
	Mark2Creator();
	Parachute* createParachute();
};
#endif
