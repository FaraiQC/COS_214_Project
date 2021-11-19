#ifndef FALCON_ROCKETS_MERLINCORE_H
#define FALCON_ROCKETS_MERLINCORE_H

#include "Engine.h"
#include "EngineOptimisation.h"

class MerlinCore : public Engine {
private:
    EngineOptimisation* readyState;

public:
    MerlinCore(string EngineID);

    void turnOn() override;

    void turnOff() override;

    string getReadyState();
    
    void setReadyState(EngineOptimisation* e);
    
    void checkState();

    void notify();

    ~MerlinCore() override;
};


#endif
