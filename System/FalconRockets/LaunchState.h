#ifndef FALCON_ROCKETS_LAUNCHSTATE_H
#define FALCON_ROCKETS_LAUNCHSTATE_H

#include "SeparationState.h"

class LaunchState : public RocketState {
public:
    LaunchState();

    void execute(Stage *stageOne, Stage *interStage, Stage *stageTwo) override;

    RocketState *getNextState() override;

    ~LaunchState();
};


#endif
