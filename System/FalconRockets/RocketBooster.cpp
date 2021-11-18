#include "RocketBooster.h"

RocketBooster::RocketBooster(string id, int NumberOfEngines) : Engine(id, 845, "PX/L1") {
    numEngines = NumberOfEngines;
    MerlinCreator merlinCreator;
    for (int i = 0; i < NumberOfEngines; ++i) {
        add(merlinCreator.createEngine());
    }
}

void RocketBooster::add(Engine *engine) {
    engines.push_back(engine);
}

void RocketBooster::remove(Engine *engine) {
    // TODO: Remove specified engine from the collection.
}

vector<Engine *> RocketBooster::getEngines() {
    return engines;
}

void RocketBooster::turnOn() {
    cout << "Turning all Booster engines" << endl;
    for (auto &engine : engines)
        engine->turnOn();
}

void RocketBooster::turnOff() {
    cout << "Turning all booster engines" << endl;
    for (auto &engine : engines)
        engine->turnOff();
}


void RocketBooster::setReadyState(EngineOptimisation* e)
{
}

void RocketBooster::notify()
{
    
}


RocketBooster::~RocketBooster() = default;
