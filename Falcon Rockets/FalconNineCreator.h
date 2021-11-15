#ifndef FALCON_ROCKETS_FALCONNINECREATOR_H
#define FALCON_ROCKETS_FALCONNINECREATOR_H

#include "RocketFactory.h";
#include "FalconNine.h"

class FalconNineCreator : public RocketFactory {
public:
    FalconNineCreator();

    Rocket* createRocket() override;

    ~FalconNineCreator() override;
};


#endif
