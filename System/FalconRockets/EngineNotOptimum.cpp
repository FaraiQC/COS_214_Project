#include "EngineNotOptimum.h"
#include <iostream>

/**
 * @brief Construct a new Engine Not Optimum:: Engine Not Optimum object
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
EngineNotOptimum::EngineNotOptimum() {
	readyState="NotOptimum";
}

/**
 * @brief change the current state
 * 
 * @return EngineOptimisation* 
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
EngineOptimisation* EngineNotOptimum::changeState() {
	return new EngineOptimum();
}

/**
 * @brief handle the state if not optimum
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
void EngineNotOptimum::handleState(){
	std::cout
		<< "\n\t\tENGINE_STATE:"
		<< "\n\t\t\tNot optimum, hence not ready for launch"
		<< std::endl;
}

/**
 * @brief prints the current state
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
void EngineNotOptimum::checkState(){
	std::cout
		<< "\n\t\tENGINE_STATE:"
		<< "\n\t\t\tNot optimum"
		<< std::endl;
}

/**
 * @brief getter the current state
 * 
 * @return "not Optimum"
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
string EngineNotOptimum::getState(){
	return "Not Optimum";
}
