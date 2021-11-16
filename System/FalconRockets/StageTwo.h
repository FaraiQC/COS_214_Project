#ifndef FALCON_ROCKETS_STAGETWO_H
#define FALCON_ROCKETS_STAGETWO_H

#include "Stage.h"
#include "Spacecraft.h"

class StageTwo : public Stage {
private:
    int numEngines;
    Spacecraft *capsule;
    vector<Engine *> engines;
public:
    StageTwo(string id);

    void addEngine(Engine *);

    void setSpaceCraft(Spacecraft * spacecraft);

    void addCargo();

    ~StageTwo() override;
};


#endif
