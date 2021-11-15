#ifndef FALCON_ROCKETS_ROCKETFACTORY_H
#define FALCON_ROCKETS_ROCKETFACTORY_H

#include "Rocket.h"

class RocketFactory {
public:
    RocketFactory();

    virtual Rocket* createRocket() = 0;

    virtual ~RocketFactory();
};


#endif
