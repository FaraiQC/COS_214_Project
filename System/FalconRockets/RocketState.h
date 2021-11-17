#ifndef FALCON_ROCKETS_ROCKETSTATE_H
#define FALCON_ROCKETS_ROCKETSTATE_H

#include "Stage.h"

class RocketState {
public:
    RocketState();

    virtual void execute(Stage *stageOne, Stage *interStage, Stage *stageTwo) = 0;

    virtual RocketState *getNextState() = 0;

    ~RocketState();
};


#endif
