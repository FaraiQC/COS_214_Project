#include "LaunchState.h"

/**
 * @brief Construct a new Launch State:: Launch State object
 * 
 * @author Awelani Murovhi (u18335412)
 * 
 */
LaunchState::LaunchState() {

}

/**
 * @brief handles the launch state of the rocket by calling the stage one's activate() function
 * 
 * @param stageOne 
 * @param interStage 
 * @param stageTwo 
 * 
 * @author Awelani Murovhi (u18335412)
 */
void LaunchState::execute(Stage *stageOne, Stage *interStage, Stage *stageTwo) {
    stageOne->activate();
}

/**
 * @brief returns next state
 * 
 * @return RocketState* 
 * 
 * @author Awelani Murovhi (u18335412)
 */
RocketState *LaunchState::getNextState() {
    return new SeparationState();
}

/**
 * @brief Destroy the Launch State:: Launch State object
 * 
 * @author Awelani Murovhi (u18335412)
 * 
 */
LaunchState::~LaunchState() = default;
