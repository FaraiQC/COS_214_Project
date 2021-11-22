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
    int fuel;
    string type;
public:
    explicit StageOne(string id);

    void activate() override;

    void deactivate() override;

    void addEngine(Engine* engine);

    bool testEngines();

    void setNum(int s);

    void printEngines();

    bool determineOptimisation();

    ~StageOne() override;

    void setFuel(int f);

    int getFuel();

    void setType(string type);

    void land();
};


#endif
