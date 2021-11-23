#include "Engine.h"

/**
 * @brief Construct a new Engine:: Engine object
 * 
 * @param EngineId id of engine
 * @param maxThrust engine thruster
 * @param propellants engine propellant 
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
Engine::Engine(string EngineId, int maxThrust, string propellants) {
    this->id = EngineId;
    this->thrustMax = maxThrust;
    this->propellant = propellants;
}

/**
 * @brief getter for engine id
 * 
 * @return string :-id
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
string Engine::getId() {
    return id;
}

/**
 * @brief setter for engine id
 * 
 * @param i :- id
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
void Engine::setId(string i) {
    this->id = i;
}

/**
 * @brief getter fir propellant
 * 
 * @return string :- propellant name
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
string Engine::getPropellant() {
    return propellant;
}

/**
 * @brief setter for propellant
 * 
 * @param prope :- propellant name
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
void Engine::setPropellant(string prope) {
    propellant = prope;
}

/**
 * @brief getter for state of the engine
 * 
 * @return true :-if(Engine On)
 * @return false :-if(Engine Off)
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
bool Engine::getState() {
    return false;
}


/**
 * @brief Turns engines on if turned off
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
void Engine::turnOn() {
    if (!on) {
        on = true;

        std::cout
            << "\n\t\t" << id
            << "\t\t\tON";

    } else {
        std::cout
            << "\n\t\t" << id
            << "\n\t\t\tALREADY ON";
    }
}

/**
 * @brief turns engine off if turned on
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
void Engine::turnOff() {
    if (on) {
        on = false;

        std::cout
            << "\n\t\t" << id
            << "\t\t\tOFF";

    } else {
        std::cout
            << "\n\t\t" << id
            << "\n\t\t\tALREADY OFF";
    }
}

/**
 * @brief setter for engine state
 * 
 * @param state 
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
void Engine::setState(bool state) {
    on = state;
}

/**
 * @brief change the ready state
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
void Engine::changeReadyState()
{
    readyState=readyState->changeState();
}

/**
 * @brief handle ready state
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
void Engine::handleReadyState()
{
    readyState->handleState();
}

/**
 * @brief getter for state
 * 
 * @return string :-state
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
string Engine::getReadyState()
{
    return readyState->getState();
}

/**
 * @brief Destroy the Engine:: Engine object
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
Engine::~Engine() = default;