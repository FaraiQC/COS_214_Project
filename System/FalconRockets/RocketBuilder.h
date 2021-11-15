#ifndef FALCON_ROCKETS_ROCKETBUILDER_H
#define FALCON_ROCKETS_ROCKETBUILDER_H

#include "iostream"

using namespace std;

class RocketBuilder {
public:
    RocketBuilder();

    virtual void addElectronics() = 0;

    virtual void addEngines() = 0;

    virtual void addStageOne();

    virtual void addStageTwo();

    virtual void addInterStage();

    virtual ~RocketBuilder();
};


#endif
