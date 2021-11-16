#ifndef FALCON_ROCKETS_ROCKETBOOSTER_H
#define FALCON_ROCKETS_ROCKETBOOSTER_H

#include "Engine.h"
#include "vector"

class EngineFactory {
};

class RocketBooster : public Engine {
private :
    vector<Engine *> engines;
public:
    RocketBooster(string id, int maxThrust, string propellant, int NumberOfEngines);

    void add(Engine *);

    void remove(Engine *);

    void turnOn() override;

    void turnOff() override;

    vector<Engine *> getEngines();

    ~RocketBooster() override;
};


#endif