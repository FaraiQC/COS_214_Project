#ifndef ENGINEOPTIMISATION_H
#define ENGINEOPTIMISATION_H
#include <string>
using namespace std;

class EngineOptimisation {

protected:
	string readyState;

public:
	EngineOptimisation();

	virtual EngineOptimisation* changeState()=0;

	virtual void handleState() = 0;

	virtual void checkState() =0;

	virtual string getState() =0;
};

#endif
