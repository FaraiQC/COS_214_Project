#ifndef TESTSIMULATION_H
#define TESTSIMULATION_H
#include "Command.h"
#include "Simulation.h"

class TestSimulation : public Command {

private:
    Simulation* receiver;

public:
    TestSimulation(Simulation* receiver);

    ~TestSimulation();

    void execute();

};

#endif
