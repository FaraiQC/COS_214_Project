#ifndef FALCON_ROCKETS_STAGETWO_H
#define FALCON_ROCKETS_STAGETWO_H

#include "Stage.h"
#include "../DragonSpacecraft/Spacecraft.h"
//#include "../StarlinkSatellites/Satellite.h"
#include "VacuumEngine.h"
#include "EngineNotOptimum.h"
#include "EngineOptimum.h"
#include "../StarlinkSatellites/satellitesMaker.h"
#include "../LaunchSimulator/TestSatellites.h"

class StageTwo : public Stage {
private:
    int numEngines;
    Spacecraft *capsule;
    TestSatellites* satellites;
    vector<Engine *> engines;
    int fuel;
public:
    explicit StageTwo(string id);

    void addEngine(Engine* engine);

    bool attachSpacecraft(Spacecraft* spaceCraft);

    bool attachSatellite(TestSatellites* satellites);

    bool HasSpacecraft();

    bool HasSatellites();

    TestSatellites* getSatellites();

    Spacecraft* getSpacecraft();

    void detachSpacecraft();

    void detachSatellite();

    void activate() override;

    void deactivate() override;

    bool testEngine();

    void setNum(int s);

    void printEngines();

    bool determineOptimisation();

    void setFuel(int f);

    int getFuel();

    ~StageTwo() override;
};


#endif
