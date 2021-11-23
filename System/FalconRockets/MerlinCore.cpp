
#include "MerlinCore.h"

/**
 * @brief Construct a new Merlin Core:: Merlin Core object
 * 
 * @param EngineID 
 * 
 * @authors Malope Elphus (u20451696), Awelani Murovhi (u20451696)
 */
MerlinCore::MerlinCore(string EngineID) : Engine(EngineID, 845, "LOX/RP-1") {

}

/**
 * @brief turns on the engine
 * 
 * @authors Malope Elphus (u20451696), Awelani Murovhi (u20451696)
 * 
 */
void MerlinCore::turnOn() {
    cout << "Merline Core: ";
    Engine::turnOn();
}

/**
 * @brief turn off the engine
 * 
 * @authors Malope Elphus (u20451696), Awelani Murovhi (u18335412)
 * 
 */
void MerlinCore::turnOff() {
    std::cout
        << "\n\tMERLINE_CORE\n";
        
    Engine::turnOff();
}

/**
 * @brief return ready state
 * 
 * @return string 
 * 
 * @author Awelani Murovhi (u18335412)
 */
string MerlinCore::getReadyState()
{
    return readyState->getState();
}

/**
 * @brief setter for ready state
 * 
 * @param e 
 * 
 * @authors Malope Elphus (u20451696), Awelani Murovhi (u18335412)
 */
void MerlinCore::setReadyState(EngineOptimisation* e)
{
    readyState=e;
}

/**
 * @brief checks the ready state
 * 
 * @author Awelani Murovhi (u18335412)
 * 
 */
void MerlinCore::checkState()
{
    readyState->checkState();
}

/**
 * @brief notify
 * 
 * @author Awelani Murovhi (u18335412)
 * 
 */
void MerlinCore::notify()
{
    checkState();
}

/**
 * @brief Destroy the Merlin Core:: Merlin Core object
 * 
 * @author Awelani Murovhi (u18335412)
 * 
 */
MerlinCore::~MerlinCore() = default;
