#ifndef ENGINEOPTIMUM_H
#define ENGINEOPTIMUM_H
#include "EngineOptimisation.h"

class EngineOptimum : public EngineOptimisation {


public:
	EngineOptimum();

	EngineOptimisation* changeState();

	void handleState();

	void checkState();

	string getState();
};

#endif
