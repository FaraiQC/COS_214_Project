#ifndef FALCON_ROCKETS_ENGINE_H
#define FALCON_ROCKETS_ENGINE_H

#include "iostream"
#include "EngineOptimisation.h"
#include <vector>

using namespace std;

class Engine {
private:
    string id;
    bool on;
    int thrustMax;
    string propellant;
    EngineOptimisation* readyState;

public:
    explicit Engine(string Id, int maxThrust, string propellant);

    string getId();

    void setId(string id);

    string getPropellant();

    static bool getState();

    void setState(bool);

    void setPropellant(string propellant);

    virtual void turnOn();

    virtual void turnOff();

    virtual void setReadyState(EngineOptimisation* e) = 0;

    virtual void changeReadyState();

    virtual void handleReadyState();

    virtual string getReadyState();

    virtual void notify() =0;
   
    virtual ~Engine();
};


#endif
