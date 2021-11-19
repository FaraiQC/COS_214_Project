#ifndef THRUSTERCREATOR_H
#define THRUSTERCREATOR_H
#include "Thruster.h"

class ThrusterCreator {
	private:
		int power;

	public:
		virtual Thruster* createThruster()=0;
};

#endif
