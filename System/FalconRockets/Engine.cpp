#include "Engine.h"

Engine::Engine(string EngineId, int maxThrust, string propellant) {
    id = EngineId;
    thrustMax = maxThrust;
}

string Engine::getId() {
    return id;
}

void Engine::setId(string id) {
    this->id = id;
}

string Engine::getPropellant() {
    return propellant;
}

void Engine::setPropellant(string prop) {
    propellant = prop;
}

bool Engine::getState() {
   return false;
}

void Engine::turnOn() {
    if (!on) {
        cout << id << " is turning on... " << endl;
        on = true;
    } else {
        cout << id << " is already on!" << endl;
    }
    
}

void Engine::turnOff() {

    if (on) {
        cout << id << " is turning off... " << endl;
        on = false;
    } else {
        cout << id << " is already off!" << endl;
    }
}

void Engine::setState(bool state) {
    on = state;
}

Engine::~Engine() = default;


