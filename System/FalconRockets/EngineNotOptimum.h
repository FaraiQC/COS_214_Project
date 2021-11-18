#ifndef ENGINENOTOPTIMUM_H
#define ENGINENOTOPTIMUM_H
#include "EngineOptimisation.h"
#include "EngineOptimum.h"

class EngineNotOptimum :public EngineOptimisation {


public:
	EngineNotOptimum();

	EngineOptimisation* changeState();

	void handleState();

	void checkState();

	string getState();
};

#endif
