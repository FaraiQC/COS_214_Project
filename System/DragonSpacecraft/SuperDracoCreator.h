#ifndef SUPERDRACOCREATOR_H
#define SUPERDRACOCREATOR_H
#include "ThrusterCreator.h"
#include "SuperDraco.h"
class SuperDracoCreator : ThrusterCreator {
	public:
		Thruster* createThruster(string);
};
#endif
