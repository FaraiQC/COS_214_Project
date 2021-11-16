#ifndef FALCON_ROCKETS_ENGINEFACTORY_H
#define FALCON_ROCKETS_ENGINEFACTORY_H

#include "Engine.h"

class EngineFactory {
public:
    EngineFactory();

    virtual Engine *createEngine() = 0;

    virtual ~EngineFactory();
};


#endif