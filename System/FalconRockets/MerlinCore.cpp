
#include "MerlinCore.h"

/**
 * @brief Construct a new Merlin Core:: Merlin Core object
 * 
 * @param EngineID 
 */
MerlinCore::MerlinCore(string EngineID) : Engine(EngineID, 845, "LOX/RP-1") {

}

/**
 * @brief turns on the engine
 * 
 */
void MerlinCore::turnOn() {
    cout << "Merlin Core: ";
    Engine::turnOn();
}

/**
 * @brief turn off the engine
 * 
 */
void MerlinCore::turnOff() {
    cout << "Merlin Core: ";
    Engine::turnOff();
}

/**
 * @brief return ready state
 * 
 * @return string 
 */
string MerlinCore::getReadyState()
{
    return readyState->getState();
}

/**
 * @brief setter for ready state
 * 
 * @param e 
 */
void MerlinCore::setReadyState(EngineOptimisation* e)
{
    readyState=e;
}

/**
 * @brief checks the ready state
 * 
 */
void MerlinCore::checkState()
{
    readyState->checkState();
}

/**
 * @brief notify
 * 
 */
void MerlinCore::notify()
{
    checkState();
}

/**
 * @brief Destroy the Merlin Core:: Merlin Core object
 * 
 */
MerlinCore::~MerlinCore() = default;
