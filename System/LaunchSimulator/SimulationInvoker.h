#ifndef SIMULATIONINVOKER_H
#define SIMULATIONINVOKER_H
#include "Command.h"

class SimulationInvoker {

private:
    Command* command;

public:
    SimulationInvoker(Command* command);

    ~SimulationInvoker();

    void Invoke();

};

#endif
