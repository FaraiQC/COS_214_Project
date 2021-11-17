#ifndef FALCON_ROCKETS_ROCKET_H
#define FALCON_ROCKETS_ROCKET_H

#include "StageOne.h"
#include "InterStage.h"
#include "StageTwo.h"
#include "RocketState.h"

class Rocket {
private:
    string id;
    StageOne *stageOne;
    InterStage *interStage;
    StageTwo *stageTwo;
    RocketState* rocketState;
public:
    Rocket();

    void setName(string id);

    string getName();

    virtual void setStageOne(StageOne *one);

    virtual void setInterStage(InterStage *inter);

    virtual void setStageTwo(StageTwo *two);

    virtual StageTwo *getStageTwo();

    virtual bool launch();

    virtual StageOne *getStageOne();

    virtual InterStage* getInterStage();

    virtual void setAllStages(StageOne *one, InterStage *interStage, StageTwo *two);

    virtual ~Rocket();
};


#endif
