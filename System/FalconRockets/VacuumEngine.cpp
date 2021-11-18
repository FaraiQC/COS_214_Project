#include "VacuumEngine.h"

VacuumEngine::VacuumEngine(string EngineId) : Engine(EngineId, 981, "LOX/RP-1") {

}

void VacuumEngine::turnOn() {
    cout << "Vacuum-E: ";
    Engine::turnOn();
}

void VacuumEngine::turnOff() {
    cout << "Vacuum-E: ";
    Engine::turnOff();
}

string Engine::getReadyState()
{
    return readyState->getState();
}

void Engine::setReadyState(EngineOptimisation* e)
{
    readyState=e;
}

void Engine::checkState()
{
    readyState->checkState();
}

VacuumEngine::~VacuumEngine() = default;
