#ifndef FALCON_ROCKETS_INTERSTAGECREATOR_H
#define FALCON_ROCKETS_INTERSTAGECREATOR_H

#include "InterStage.h"
#include "StageFactory.h"

class InterStageCreator : public StageFactory {
private:
public:
    InterStageCreator();

    Stage *createStage(string name) override;

    ~InterStageCreator() override;
};


#endif
