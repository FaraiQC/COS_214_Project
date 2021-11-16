#ifndef FALCON_ROCKETS_STAGEONE_H
#define FALCON_ROCKETS_STAGEONE_H
#include "Stage.h"

class StageOne : public Stage {
private:
    int numEngines;
    vector<Engine *> engines;
public:
    explicit StageOne(string id);

    void addEngine(Engine *engine);

    ~StageOne() override;

};


#endif