#ifndef FALCON_ROCKETS_VACUUMENGINE_H
#define FALCON_ROCKETS_VACUUMENGINE_H

#include "Engine.h"
#include "EngineOptimisation.h"

class VacuumEngine : public Engine {
public:
    explicit VacuumEngine(string EngineId);

    void turnOn() override;

    void turnOff() override;
    
    virtual string getReadyState();
    
    virtual void setReadyState(EngineOptimisation* e);
    
    virtual void checkState();

    ~VacuumEngine() override;
};


#endif
