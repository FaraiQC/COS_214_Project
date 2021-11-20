#ifndef FALCON_ROCKETS_STAGETWO_H
#define FALCON_ROCKETS_STAGETWO_H

#include "Stage.h"
#include "../DragonSpacecraft/Spacecraft.h"
#include "../StarlinkSatellites/Satellite.h"
#include "VacuumEngine.h"
#include "EngineNotOptimum.h"
#include "EngineOptimum.h"

//#include "Spacecraft.h"


class StageTwo : public Stage {
private:
    int numEngines;
    Spacecraft *capsule;
    Satellite* satellite;
    vector<Engine *> engines;
public:
    explicit StageTwo(string id);

    void addEngine(Engine* engine);

    void attachSpacecraft(Spacecraft* spaceCraft);

    void attachSatellite(Satellite* satellite);

    void detachSpacecraft();

    void detachSatellite();

    void activate() override;

    void deactivate() override;

    bool testEngine();

    void setNum(int s);

    void printEngines();

    bool determineOptimisation();

    ~StageTwo() override;
};


#endif
