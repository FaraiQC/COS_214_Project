#include "Rocket.h"

/**
 * @brief Construct a new Rocket:: Rocket object
 * 
 */
Rocket::Rocket() {
    rocketState = new LaunchState();
}

/**
 * @brief setter for stage one
 * 
 * @param one 
 */
void Rocket::setStageOne(StageOne *one) {
    stageOne = one;
}

/**
 * @brief setter for inter stage
 * 
 * @param inter 
 */
void Rocket::setInterStage(InterStage *inter) {
    interStage = inter;
}

/**
 * @brief setter for stage two 
 * 
 * @param two 
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
 */
void Rocket::setAllStages(StageOne *one, InterStage *inter, StageTwo *two) {
    stageOne = one;
    interStage = inter;
    stageTwo = two;
}

/**
 * @brief Destroy the Rocket:: Rocket object
 * 
 */
Rocket::~Rocket() {
    // TODO free all the pointers.
}

/**
 * @brief getter for second stage object
 * 
 * @return StageTwo* 
 */
StageTwo *Rocket::getStageTwo() {
    return stageTwo;
}

/**
 * @brief getter for stage one object
 * 
 * @return StageOne* 
 */
StageOne *Rocket::getStageOne() {
    return stageOne;
}

/**
 * @brief getter for interstage object
 * 
 * @return InterStage* 
 */
InterStage *Rocket::getInterStage() {
    return interStage;
}

/**
 * @brief launch the rocket
 * 
 * @return true 
 * @return false 
 */
bool Rocket::launch() {
    cout << "Getting ready to launch..." << endl;
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
 */
void Rocket::setName(string name) {
    id = name;
}

/**
 * @brief getter for rocket name
 * 
 * @return string 
 */
string Rocket::getName() {
    return id;
}
