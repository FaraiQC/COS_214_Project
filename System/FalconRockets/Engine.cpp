#include "Engine.h"

/**
 * @brief Construct a new Engine:: Engine object
 * 
 * @param EngineId id of engine
 * @param maxThrust engine thruster
 * @param propellants engine propellant 
 */
Engine::Engine(string EngineId, int maxThrust, string propellants) {
    this->id = EngineId;
    this->thrustMax = maxThrust;
    this->propellant = propellants;
}

/**
 * @brief getter for engine id
 * 
 * @return string 
 */
string Engine::getId() {
    return id;
}

/**
 * @brief setter for engine id
 * 
 * @param i 
 */
void Engine::setId(string i) {
    this->id = i;
}

/**
 * @brief getter fir propellant
 * 
 * @return string 
 */
string Engine::getPropellant() {
    return propellant;
}

/**
 * @brief setter for propellant
 * 
 * @param prope 
 */
void Engine::setPropellant(string prope) {
    propellant = prope;
}

/**
 * @brief getter for state of the engine
 * 
 * @return true 
 * @return false 
 */
bool Engine::getState() {
    return false;
}


/**
 * @brief turns engines on if turned off
 * 
 */
void Engine::turnOn() {
    if (!on) {
        cout << id << " is turning on... " << endl;
        on = true;
    } else {
        cout << id << " is already on!" << endl;
    }

}

/**
 * @brief turns engine off if turned on
 * 
 */
void Engine::turnOff() {

    if (on) {
        cout << id << " is turning off... " << endl;
        on = false;
    } else {
        cout << id << " is already off!" << endl;
    }
}

/**
 * @brief setter for engine state
 * 
 * @param state 
 */
void Engine::setState(bool state) {
    on = state;
}

/**
 * @brief change the ready state
 * 
 */
void Engine::changeReadyState()
{
    readyState=readyState->changeState();
}

/**
 * @brief handle ready state
 * 
 */
void Engine::handleReadyState()
{
    readyState->handleState();
}

/**
 * @brief getter for state
 * 
 * @return string 
 */
string Engine::getReadyState()
{
    return readyState->getState();
}

/**
 * @brief Destroy the Engine:: Engine object
 * 
 */
Engine::~Engine() = default;


