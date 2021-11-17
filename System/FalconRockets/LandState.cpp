#include "LandState.h"


LandState::LandState() = default;

void LandState::execute(Stage *stageOne, Stage *interStage, Stage *stageTwo) {
    dynamic_cast<StageOne *>(stageOne)->land();
}

RocketState *LandState::getNextState() {
    return nullptr;
}

LandState::~LandState() = default;
