#include "EngineOptimum.h"
#include <iostream>

EngineOptimum::EngineOptimum() {
		readyState="Optimum";
}

EngineOptimisation* EngineOptimum::changeState() {
	return new EngineOptimum();
}

void EngineOptimum::handleState()
{
	cout<<"Engine is optimum and is ready for launch..."<<endl;
}

void EngineOptimum::checkState()
{
	cout<<" Optimum."<<endl;
}

string EngineOptimum::getState()
{
	return "Optimum";
}
