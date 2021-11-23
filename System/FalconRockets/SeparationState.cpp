#include "SeparationState.h"

/**
 * @brief Construct a new Separation State:: Separation State object
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
SeparationState::SeparationState() = default;

/**
 * @brief executes the inteStage separeation function and after that the second stages lift off function
 * 
 * @param stageOne  first stage pointer
 * @param interStage  interStage pointer
 * @param stageTwo  second stage pointer
 * 
 * @author Musa Mabasa (u18265163)
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
 * 
 * @author Awelani Murovhi (u18335412)
 */
RocketState *SeparationState::getNextState() {
    return nullptr;
}

/**
 * @brief Destroy the Separation State:: Separation State object
 * 
 * @author Awelani Murovhi (u18335412)
 * 
 */
SeparationState::~SeparationState() = default;
