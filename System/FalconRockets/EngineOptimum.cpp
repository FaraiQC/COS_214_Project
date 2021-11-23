#include "EngineOptimum.h"
#include <iostream>

/**
 * @brief Construct a new Engine Optimum:: Engine Optimum object
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
EngineOptimum::EngineOptimum() {
		readyState="Optimum";
}

/**
 * @brief change thr current state
 * 
 * @return EngineOptimisation* 
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
EngineOptimisation* EngineOptimum::changeState() {
	return new EngineOptimum();
}

/**
 * @brief handle the state if Optimum
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
void EngineOptimum::handleState(){
	std::cout
		<< "\n\t\tENGINE_STATE:"
		<< "\n\t\t\tOptimum, hence ready for launch"
		<< std::endl;
}

/**
 * @brief prints the current state
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
void EngineOptimum::checkState(){
	std::cout
		<< "\n\t\tENGINE_STATE:"
		<< "\n\t\t\tOptimum"
		<< std::endl;
}

/**
 * @brief getter for the state
 * 
 * @return string 
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
string EngineOptimum::getState()
{
	return "Optimum";
}
