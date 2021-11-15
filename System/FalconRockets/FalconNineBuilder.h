#ifndef FALCON_ROCKETS_FALCONNINEBUILDER_H
#define FALCON_ROCKETS_FALCONNINEBUILDER_H

#include "RocketBuilder.h"
#include "FalconNine.h"

class FalconNineBuilder : public RocketBuilder {
private:
    FalconNine *falconNine;
public:
    FalconNineBuilder();

    void addElectronics() override;

    void addEngines() override;

    void addStageOne() override;

    void addInterStage() override;

    void addStageTwo() override;

    FalconNine *getRocket();

    ~FalconNineBuilder() override;
};


#endif
