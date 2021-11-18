#ifndef FALCON_ROCKETS_STAGETWO_H
#define FALCON_ROCKETS_STAGETWO_H

#include "Stage.h"
#include "SpaceCraft.h"
#include "Satalite.h"
#include "VacuumEngine.h"

class StageTwo : public Stage {
private:
    int numEngines;
    Spacecraft *capsule;
    Satalite* satalite;
    vector<Engine *> engines;
public:
    explicit StageTwo(string id);

    void addEngine();

    void attachSpaceCraft(SpaceCraft* spaceCraft);

    void attachSatalite(Satalite* satalite);

    void activate() override;

    void deactivate() override;

    void testEngines();

    int setNum(int s);

    void printEngines();

    bool determineOptimisation();

    ~StageTwo() override;
};


#endif
