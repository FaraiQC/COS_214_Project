#include "SeparationState.h"

SeparationState::SeparationState() = default;

void SeparationState::execute(Stage *stageOne, Stage *interStage, Stage *stageTwo) {
    interStage->activate();
    stageTwo->activate();
}

RocketState *SeparationState::getNextState() {
    return nullptr;
}

SeparationState::~SeparationState() = default;
