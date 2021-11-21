#include "VacuumEngine.h"

/**
 * @brief Construct a new Vacuum Engine:: Vacuum Engine object
 * 
 * @param EngineId engine id
 */
VacuumEngine::VacuumEngine(string EngineId) : Engine(EngineId, 981, "LOX/RP-1") {

}

/**
 * @brief turn on the vacuum engine
 * 
 */
void VacuumEngine::turnOn() {
    cout << "Vacuum-E: ";
    Engine::turnOn();
}

/**
 * @brief turn off the vacuum engine
 * 
 */

void VacuumEngine::turnOff() {
    cout << "Vacuum-E: ";
    Engine::turnOff();
}

/**
 * @brief getter for ready state
 * 
 * @return string 
 */
string VacuumEngine::getReadyState()
{
    return readyState->getState();
}

/**
 * @brief setter fir readyState
 * 
 * @param e 
 */
void VacuumEngine::setReadyState(EngineOptimisation* e)
{
    readyState=e;
}

/**
 * @brief check state
 * 
 */
void VacuumEngine::checkState()
{
    readyState->checkState();
}

/**
 * @brief notify
 * 
 */
void VacuumEngine::notify()
{
    checkState();
}

/**
 * @brief Destroy the Vacuum Engine:: Vacuum Engine object
 * 
 */
VacuumEngine::~VacuumEngine() = default;
