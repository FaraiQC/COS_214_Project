#include "RocketBooster.h"

RocketBooster::RocketBooster(string id, int maxThrust, string propellant, int NumberOfEngines) : Engine(id, maxThrust,propellant) {
    for (int i = 0; i < NumberOfEngines; ++i) {
        // TODO: Initialise the engines vector with # engines specified.
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
    for (auto &engine : engines)
        engine->turnOn();
}

void RocketBooster::turnOff() {
    for (auto &engine : engines)
        engine->turnOff();
}


RocketBooster::~RocketBooster() = default;
