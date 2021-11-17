#ifndef DRACOCREATOR_H
#define DRACOCREATOR_H
#include "ThrusterCreator.h"
#include "Thruster.h"
#include "Draco.h"

class DracoCreator : ThrusterCreator {
	public:
		Thruster* createThruster(string);
};

#endif
