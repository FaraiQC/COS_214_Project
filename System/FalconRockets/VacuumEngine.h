#ifndef FALCON_ROCKETS_VACUUMENGINE_H
#define FALCON_ROCKETS_VACUUMENGINE_H

#include "Engine.h"

class VacuumEngine : public Engine {
public:
    explicit VacuumEngine(string EngineId);

    void turnOn() override;

    void turnOff() override;

    ~VacuumEngine() override;
};


#endif
