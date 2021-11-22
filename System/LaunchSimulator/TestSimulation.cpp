#include "TestSimulation.h"

TestSimulation::TestSimulation(Simulation* receiver)
{
    this->receiver=receiver;
}

TestSimulation::~TestSimulation()
{
    
}

void TestSimulation::execute()
{
    receiver->TestSimulation();
}