#include "VacuumEngine.h"

/**
 * @brief Construct a new Vacuum Engine:: Vacuum Engine object
 * 
 * @param EngineId engine id
 * 
 * @author Malope Elphus (u20451696)
 */
VacuumEngine::VacuumEngine(string EngineId) : Engine(EngineId, 981, "LOX/RP-1") {

}

/**
 * @brief turn on the vacuum engine
 * 
 * @author Malope Elphus (u20451696)
 */
void VacuumEngine::turnOn() {
    std::cout
        << "\n\t\tVACUUM-E: ";
    Engine::turnOn();
}

/**
 * @brief turn off the vacuum engine
 * 
 * @author Malope Elphus (u20451696)
 * 
 */

void VacuumEngine::turnOff() {
    std::cout
        << "\n\t\tVACUUM-E: ";
    Engine::turnOff();
}

/**
 * @brief getter for ready state
 * 
 * @return string 
 * 
 * @author Malope Elphus (u20451696)
 */
string VacuumEngine::getReadyState()
{
    return readyState->getState();
}

/**
 * @brief setter fir readyState
 * 
 * @param e 
 * 
 * @author Malope Elphus (u20451696)
 */
void VacuumEngine::setReadyState(EngineOptimisation* e)
{
    readyState=e;
}

/**
 * @brief check state
 * 
 * @author Malope Elphus (u20451696)
 * 
 */
void VacuumEngine::checkState()
{
    readyState->checkState();
}

/**
 * @brief notify
 * 
 * @author Malope Elphus (u20451696)
 * 
 */
void VacuumEngine::notify()
{
    checkState();
}

/**
 * @brief Destroy the Vacuum Engine:: Vacuum Engine object
 * 
 * @author Malope Elphus (u20451696)
 * 
 */
VacuumEngine::~VacuumEngine() = default;
