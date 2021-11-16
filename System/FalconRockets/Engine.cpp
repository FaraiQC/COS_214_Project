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

    
}

void Engine::turnOff() {

   
}

void Engine::setState(bool state) {
    
}

Engine::~Engine() = default;


