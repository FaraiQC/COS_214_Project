#ifndef LAUNCH_H
#define LAUNCH_H
#include "Command.h"
#include "Simulation.h"

class Launch : public Command {

private:
    Simulation* receiver;

public:
    Launch(Simulation* receiver);

    ~Launch();

   void execute();

};

#endif
