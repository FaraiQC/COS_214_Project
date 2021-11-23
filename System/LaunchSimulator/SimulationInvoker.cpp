#include "SimulationInvoker.h"

/**
 * @brief Construct a new Simulation Invoker:: Simulation Invoker object
 * 
 * @param command 
 * 
 * @author Musa Mabasa (u18265163)
 */
SimulationInvoker::SimulationInvoker(Command* command)
{
    this->command=command;
}

/**
 * @brief Destroy the Simulation Invoker:: Simulation Invoker object
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
SimulationInvoker::~SimulationInvoker()
{
}


/**
 * @brief Invoke
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
void SimulationInvoker::Invoke()
{
    command->execute();
}