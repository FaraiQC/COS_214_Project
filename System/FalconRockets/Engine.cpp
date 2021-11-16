#include "Engine.h"

Engine::Engine(string EngineId, int maxThrust, string propellant) {
    id = EngineId;
    thrustMax = maxThrust;
}

string Engine::getId() {
    return id;
}

void Engine::setId(string id) {
    
}

string Engine::getPropellant() {
    
}

void Engine::setPropellant(string prop) {
    
}

bool Engine::getState() {
   
}

void Engine::turnOn() {

    
}

void Engine::turnOff() {

   
}

void Engine::setState(bool state) {
    
}

Engine::~Engine() = default;


