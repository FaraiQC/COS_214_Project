#ifndef MARK3CREATOR_H
#define MARK3CREATOR_H
#include "Parachute.h"
#include "Mark3Parachute.h"
#include "ParachuteCreator.h"
#include <string>

using namespace std;

class Mark3Creator :public ParachuteCreator {
	public:
		Parachute* createParachute(string);
		Mark3Creator();
};
#endif
