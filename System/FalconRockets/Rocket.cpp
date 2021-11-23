#include "Rocket.h"

/**
 * @brief Construct a new Rocket:: Rocket object
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
Rocket::Rocket() {
    rocketState = new LaunchState();
}

/**
 * @brief setter for stage one
 * 
 * @param one 
 * 
 * @author Musa Mabasa (u18265163)
 */
void Rocket::setStageOne(StageOne *one) {
    stageOne = one;
}

/**
 * @brief setter for inter stage
 * 
 * @param inter 
 * 
 * @authors Musa Mabasa (u18265163)
 */
void Rocket::setInterStage(InterStage *inter) {
    interStage = inter;
}

/**
 * @brief setter for stage two 
 * 
 * @param two 
 * 
 * @author Musa Mabasa (u18265163)
 */
void Rocket::setStageTwo(StageTwo *two) {
    stageTwo = two;
}

/**
 * @brief set all the rocket stages at onces 
 * 
 * @param one is the first stage
 * @param inter is the inter stage
 * @param two is the second stage
 * 
 * @author Awelani Murovhi (u18335412)
 */
void Rocket::setAllStages(StageOne *one, InterStage *inter, StageTwo *two) {
    stageOne = one;
    interStage = inter;
    stageTwo = two;
}

/**
 * @brief Destroy the Rocket:: Rocket object
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
Rocket::~Rocket() {
    // TODO free all the pointers.
}

/**
 * @brief getter for second stage object
 * 
 * @return StageTwo* 
 * 
 * @author Awelani Murovhi (u18335412)
 */
StageTwo *Rocket::getStageTwo() {
    return stageTwo;
}

/**
 * @brief getter for stage one object
 * 
 * @return StageOne* 
 * 
 * @author Awelani Murovhi (u18335412)
 */
StageOne *Rocket::getStageOne() {
    return stageOne;
}

/**
 * @brief getter for interstage object
 * 
 * @return InterStage* 
 * 
 * @author Awelani Murovhi (u18335412)
 */
InterStage *Rocket::getInterStage() {
    return interStage;
}

/**
 * @brief Test engines
 * 
 * @return true :-if(engine pass)
 * @return false :-if(engine fail
 * 
 * @author Awelani Murovhi (u18335412))
 */
bool Rocket::test()
{
    if(stageOne->testEngines()==true && stageTwo->testEngine()==true)
    {
        return true;
    }
    return false;
}

/**
 * @brief launch the rocket
 * 
 * @return true 
 * @return false 
 * 
 * @author Malope Elphus (u20451696)
 */
bool Rocket::launch() {
    std::cout
        << "\n\t\tREADY TO LAUNCH\n";

    while (rocketState) {
        rocketState->execute(stageOne, interStage, stageTwo);
        rocketState = rocketState->getNextState();
    }
    return true;
}

/**
 * @brief setter fot rocket name
 * 
 * @param name 
 * 
 * @author Awelani Murovhi (u18335412)
 */
void Rocket::setName(string name) {
    id = name;
}

/**
 * @brief getter for rocket name
 * 
 * @return string 
 * 
 * @author Awelani Murovhi (u18335412)
 */
string Rocket::getName() {
    return id;
}
