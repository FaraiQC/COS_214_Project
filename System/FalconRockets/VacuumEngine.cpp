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

string VacuumEngine::getReadyState()
{
    return readyState->getState();
}

void VacuumEngine::setReadyState(EngineOptimisation* e)
{
    readyState=e;
}

void VacuumEngine::checkState()
{
    readyState->checkState();
}

void VacuumEngine::notify()
{
    checkState();
}

VacuumEngine::~VacuumEngine() = default;
