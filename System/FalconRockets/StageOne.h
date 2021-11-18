#ifndef FALCON_ROCKETS_STAGEONE_H
#define FALCON_ROCKETS_STAGEONE_H
#include "Stage.h"
#include "MerlinCore.h"
#include "EngineNotOptimum.h"
#include "EngineOptimum.h"

class StageOne : public Stage {
private:
    int numEngines;
    vector<Engine *> engines;
public:
    explicit StageOne(string id);

    void activate() override;

    void deactivate() override;

    void addEngine();

    bool testEngines();

    int setNum(int s);

    void printEngines();

    bool determineOptimisation();

    ~StageOne() override;

    void land();
};


#endif
