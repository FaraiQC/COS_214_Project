#ifndef MARK3CREATOR_H
#define MARK3CREATOR_H
#include "Parachute.h"
#include "Mark3Parachute.h"
#include "ParachuteCreator.h"

class Mark3Creator :public ParachuteCreator {
	public:
		Parachute* createParachute();
		Mark3Creator();
};
#endif
