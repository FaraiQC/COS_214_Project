#include "SeparationState.h"

/**
 * @brief Construct a new Separation State:: Separation State object
 * 
 */
SeparationState::SeparationState() = default;

/**
 * @brief executes the inteStage separeation function and after that the second stages lift off function
 * 
 * @param stageOne  first stage pointer
 * @param interStage  interStage pointer
 * @param stageTwo  second stage pointer
 */
void SeparationState::execute(Stage *stageOne, Stage *interStage, Stage *stageTwo)
{
    interStage->activate();
    stageTwo->activate();
}

/**
 * @brief returns next state
 * 
 * @return RocketState* 
 */
RocketState *SeparationState::getNextState() {
    return nullptr;
}

/**
 * @brief Destroy the Separation State:: Separation State object
 * 
 */
SeparationState::~SeparationState() = default;
