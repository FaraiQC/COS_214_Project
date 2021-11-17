#ifndef FALCON_ROCKETS_MERLINCORE_H
#define FALCON_ROCKETS_MERLINCORE_H

#include "Engine.h"

class MerlinCore : public Engine {
public:
    MerlinCore(string EngineID);

    void turnOn() override;

    void turnOff() override;

    ~MerlinCore() override;
};


#endif
