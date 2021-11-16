#ifndef FALCON_ROCKETS_STAGEFACTORY_H
#define FALCON_ROCKETS_STAGEFACTORY_H

#include "Stage.h"

class StageFactory {
private:
public:
    explicit StageFactory();

virtual Stage *createStage(string name = "") = 0;

    virtual ~StageFactory();
};

#endif
