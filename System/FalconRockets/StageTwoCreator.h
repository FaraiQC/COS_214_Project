#ifndef FALCON_ROCKETS_STAGETWOCREATOR_H
#define FALCON_ROCKETS_STAGETWOCREATOR_H

#include "StageFactory.h"
#include "StageTwo.h"

class StageTwoCreator : public StageFactory {
private:
public  :
    StageTwoCreator();

    Stage *createStage(string name) override;

    ~StageTwoCreator() override;
};

#endif
