#include "TestSimulation.h"

/**
 * @brief Construct a new Test Simulation:: Test Simulation object
 * 
 * @param receiver 
 */
TestSimulation::TestSimulation(Simulation* receiver)
{
    this->receiver=receiver;
}

/**
 * @brief Destroy the Test Simulation:: Test Simulation object
 * 
 */
TestSimulation::~TestSimulation()
{
    
}

/**
 * @brief executes the receiver's action
 * 
 */
void TestSimulation::execute()
{
    receiver->TestSimulation();
}