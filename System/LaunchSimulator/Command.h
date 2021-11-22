#ifndef COMMAND_H
#define COMMAND_H
#include "Simulation.h"

class Command {

private:
    Simulation* receiver;

public:
    Command();

    ~Command();

   virtual void execute() =0;

};

#endif
