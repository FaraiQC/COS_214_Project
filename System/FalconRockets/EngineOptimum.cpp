#include "EngineOptimum.h"
#include <iostream>

/**
 * @brief Construct a new Engine Optimum:: Engine Optimum object
 * 
 */
EngineOptimum::EngineOptimum() {
		readyState="Optimum";
}

/**
 * @brief change thr current state
 * 
 * @return EngineOptimisation* 
 */
EngineOptimisation* EngineOptimum::changeState() {
	return new EngineOptimum();
}

/**
 * @brief handle the state
 * 
 */
void EngineOptimum::handleState()
{
	cout<<"Engine is optimum and is ready for launch..."<<endl;
}

/**
 * @brief prints the current state
 * 
 */
void EngineOptimum::checkState()
{
	cout<<" Optimum."<<endl;
}

/**
 * @brief getter for the state
 * 
 * @return string 
 */
string EngineOptimum::getState()
{
	return "Optimum";
}
