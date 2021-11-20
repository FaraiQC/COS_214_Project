#include "LandState.h"

/**
 * @brief Construct a new Land State:: Land State object
 * 
 */
LandState::LandState() = default;

/**
 * @brief calls stage one's landing function to activate landing
 * 
 * @param stageOne 
 * @param interStage 
 * @param stageTwo 
 */
void LandState::execute(Stage *stageOne, Stage *interStage, Stage *stageTwo) {
    dynamic_cast<StageOne *>(stageOne)->land();
}

/**
 * @brief returns next stage
 * 
 * @return RocketState* 
 */
RocketState *LandState::getNextState() {
    return nullptr;
}

/**
 * @brief Destroy the Land State:: Land State object
 * 
 */
LandState::~LandState() = default;
