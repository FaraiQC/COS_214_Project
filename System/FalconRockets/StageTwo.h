#ifndef FALCON_ROCKETS_STAGETWO_H
#define FALCON_ROCKETS_STAGETWO_H

#include "Stage.h"
#include "../DragonSpacecraft/Spacecraft.h"
#include "../StarlinkSatellites/Satellite.h"
#include "VacuumEngine.h"
#include "EngineNotOptimum.h"
#include "EngineOptimum.h"

class StageTwo : public Stage {
private:
    int numEngines;
    Spacecraft *capsule;
    Satellite* satellite;
    vector<Engine *> engines;
public:
    explicit StageTwo(string id);

    void addEngine();

    void attachSpacecraft(Spacecraft* spaceCraft);

    void attachSatellite(Satellite* satellite);

    void activate() override;

    void deactivate() override;

    void testEngines();

    int setNum(int s);

    void printEngines();

    bool determineOptimisation();

    ~StageTwo() override;
};


#endif
