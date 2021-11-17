#ifndef FALCON_ROCKETS_STAGEONECREATOR_H
#define FALCON_ROCKETS_STAGEONECREATOR_H

#include "StageFactory.h"
#include "StageOne.h"

class StageOneCreator : public StageFactory {
public:
    StageOneCreator();

    Stage *createStage(string id) override;

    ~StageOneCreator() override;
};


#endif
