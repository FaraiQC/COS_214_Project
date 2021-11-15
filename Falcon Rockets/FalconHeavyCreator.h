#ifndef FALCON_ROCKETS_FALCONHEAVYCREATOR_H
#define FALCON_ROCKETS_FALCONHEAVYCREATOR_H

#include "FalconHeavy.h"
#include "RocketFactory.h"

class FalconHeavyCreator : public RocketFactory {
public:
    FalconHeavyCreator();

    Rocket *createRocket() override;

    ~FalconHeavyCreator();
};


#endif
