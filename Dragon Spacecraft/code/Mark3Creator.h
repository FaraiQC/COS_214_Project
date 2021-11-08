#ifndef MARK3CREATOR_H
#define MARK3CREATOR_H
#include "ParachuteCreator"
class Mark3Creator :public ParachuteCreator {


public:
	Parachute* createParachute();
	Mark3Creator();
};

#endif
