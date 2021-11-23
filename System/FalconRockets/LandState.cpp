#include "LandState.h"

/**
 * @brief Construct a new Land State:: Land State object
 * 
 * @authors Awelani Murovhi (u20451696)
 * 
 */
LandState::LandState() = default;

/**
 * @brief calls stage one's landing function to activate landing
 * 
 * @param stageOne 
 * @param interStage 
 * @param stageTwo 
 * 
 * @author Awelani Murovhi (u18335412)
 */
void LandState::execute(Stage *stageOne, Stage *interStage, Stage *stageTwo) {
    dynamic_cast<StageOne *>(stageOne)->land();
}

/**
 * @brief returns next stage
 * 
 * @return RocketState* 
 * 
 * @author Awelani Murovhi (u18335412)
 */
RocketState *LandState::getNextState() {
    return nullptr;
}

/**
 * @brief Destroy the Land State:: Land State object
 * 
 * @author Awelani Murovhi (u18335412)
 * 
 */
LandState::~LandState() = default;
