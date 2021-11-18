#include "Engine.h"

Engine::Engine(string EngineId, int maxThrust, string propellants) {
    this->id = EngineId;
    this->thrustMax = maxThrust;
    this->propellant = propellants;
}

string Engine::getId() {
    return id;
}

void Engine::setId(string i) {
    this->id = i;
}

string Engine::getPropellant() {
    return propellant;
}

void Engine::setPropellant(string prope) {
    propellant = prope;
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


