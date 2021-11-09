#ifndef PARACHUTECREATOR_H
#define PARACHUTECREATOR_H
#include "Parachute.h"

class ParachuteCreator {
	public:
		ParachuteCreator();
		virtual Parachute* createParachute()=0;
};

#endif
