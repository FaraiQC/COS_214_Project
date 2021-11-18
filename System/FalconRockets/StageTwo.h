#ifndef FALCON_ROCKETS_STAGETWO_H
#define FALCON_ROCKETS_STAGETWO_H

#include "Stage.h"
#include "../DragonSpacecraft/code/Spacecraft.h"

//#include "Spacecraft.h"


class StageTwo : public Stage {
private:
    int numEngines;
    Spacecraft *capsule;
    vector<Engine *> engines;
public:
    explicit StageTwo(string id);

    void addEngine(Engine *);

    void setSpaceCraft(Spacecraft *spacecraft);

    void activate() override;

    void deactivate() override;

    void addCargo();

    ~StageTwo() override;
};


#endif
