#ifndef FALCON_ROCKETS_ROCKETBOOSTER_H
#define FALCON_ROCKETS_ROCKETBOOSTER_H

#include "Engine.h"
#include "vector"
#include "MerlinCreator.h"

class RocketBooster : public Engine {
private :
    vector<Engine *> engines;
    int numEngines;
public:
    explicit RocketBooster(string id,  int NumberOfEngines = 9);

    void add(Engine *);

    void remove(Engine *);

    void turnOn() override;

    void turnOff() override;

    vector<Engine *> getEngines();

    ~RocketBooster() override;
};


#endif