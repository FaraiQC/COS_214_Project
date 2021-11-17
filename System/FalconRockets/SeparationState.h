#ifndef FALCON_ROCKETS_SEPARATIONSTATE_H
#define FALCON_ROCKETS_SEPARATIONSTATE_H

#include "LandState.h"

class SeparationState : public RocketState {
public:
    SeparationState();

    void execute(Stage *stageOne, Stage *interStage, Stage *stageTwo) override;

    RocketState *getNextState() override;

    ~SeparationState();
};


#endif
