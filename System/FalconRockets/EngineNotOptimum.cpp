#include "EngineNotOptimum.h"
#include <iostream>

/**
 * @brief Construct a new Engine Not Optimum:: Engine Not Optimum object
 * 
 */
EngineNotOptimum::EngineNotOptimum() {
	readyState="NotOptimum";
}

/**
 * @brief change the current state
 * 
 * @return EngineOptimisation* 
 */
EngineOptimisation* EngineNotOptimum::changeState() {
	return new EngineOptimum();
}

/**
 * @brief handle the state
 * 
 */
void EngineNotOptimum::handleState()
{
	cout<<"Engine is not optimum and not ready for launch..."<<endl;
}

/**
 * @brief prints the current state
 * 
 */
void EngineNotOptimum::checkState()
{
	cout<<" not Optimum."<<endl;
}

/**
 * @brief getter the current state
 * 
 * @return "not Optimum" 
 */
string EngineNotOptimum::getState()
{
	return "not Optimum";
}
