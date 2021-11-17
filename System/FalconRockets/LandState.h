#ifndef FALCON_ROCKETS_LANDSTATE_H
#define FALCON_ROCKETS_LANDSTATE_H

#include "RocketState.h"
#include "StageOne.h"

class LandState : public RocketState {
public:
    LandState();

    void execute(Stage *stageOne, Stage *interStage, Stage *stageTwo) override;

    RocketState *getNextState() override;

    ~LandState();
};


#endif
