#ifndef FALCON_ROCKETS_ROCKETBUILDERDIRECTOR_H
#define FALCON_ROCKETS_ROCKETBUILDERDIRECTOR_H

#include "FalconNineBuilder.h";
#include "FalconHeavyBuilder.h"


class RocketBuilderDirector {
private:
    RocketBuilder *builder;
public:
    RocketBuilderDirector();

    void setBuilder(RocketBuilder *builder);

    FalconNine buildFalconNine();

    FalconHeavy buildFalconHeavy();

    ~RocketBuilderDirector();
};


#endif
