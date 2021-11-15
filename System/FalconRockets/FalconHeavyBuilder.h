#ifndef FALCON_ROCKETS_FALCONHEAVYBUILDER_H
#define FALCON_ROCKETS_FALCONHEAVYBUILDER_H

#include "RocketBuilder.h"
#include "FalconHeavy.h"

class FalconHeavyBuilder : public RocketBuilder {
private:
    FalconHeavy *falconHeavy;
public:
    FalconHeavyBuilder();

    void addElectronics() override;

    void addEngines() override;

    void addStageOne() override;

    void addInterStage() override;

    void addStageTwo() override;

    FalconHeavy* getRocket();

    ~FalconHeavyBuilder() override;
};


#endif
