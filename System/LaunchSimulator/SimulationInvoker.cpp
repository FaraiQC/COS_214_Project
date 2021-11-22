#include "SimulationInvoker.h"

SimulationInvoker::SimulationInvoker(Command* command)
{
    this->command=command;
}

SimulationInvoker::~SimulationInvoker()
{
}

void SimulationInvoker::Invoke()
{
    command->execute();
}