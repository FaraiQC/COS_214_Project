#include "EngineNotOptimum.h"
#include <iostream>

EngineNotOptimum::EngineNotOptimum() {
	readyState="NotOptimum";
}

EngineOptimisation* EngineNotOptimum::changeState() {
	return new EngineOptimum();
}
void EngineNotOptimum::handleState()
{
	cout<<"Engine is not optimum and not ready for launch..."<<endl;
}

void EngineNotOptimum::checkState()
{
	cout<<" not Optimum."<<endl;
}

string EngineNotOptimum::getState()
{
	return "not Optimum";
}
