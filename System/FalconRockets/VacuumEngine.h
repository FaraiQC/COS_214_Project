#ifndef FALCON_ROCKETS_VACUUMENGINE_H
#define FALCON_ROCKETS_VACUUMENGINE_H

#include "Engine.h"
#include "EngineOptimisation.h"

class VacuumEngine : public Engine {
private:
    EngineOptimisation* readyState;

public:
    explicit VacuumEngine(string EngineId);

    void turnOn() override;

    void turnOff() override;
    
    string getReadyState();
    
    void setReadyState(EngineOptimisation* e);
    
    void checkState();

    void notify();

    ~VacuumEngine() override;
};


#endif
