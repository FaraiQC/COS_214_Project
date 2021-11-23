#include "SimulationInvoker.h"

/**
 * @brief Construct a new Simulation Invoker:: Simulation Invoker object
 * 
 * @param command 
 */
SimulationInvoker::SimulationInvoker(Command* command)
{
    this->command=command;
}

/**
 * @brief Destroy the Simulation Invoker:: Simulation Invoker object
 * 
 */
SimulationInvoker::~SimulationInvoker()
{
}

/**
 * @brief invokes the command
 * 
 */
void SimulationInvoker::Invoke()
{
    command->execute();
}