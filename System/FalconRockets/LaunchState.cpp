#include "LaunchState.h"

LaunchState::LaunchState() {

}

void LaunchState::execute(Stage *stageOne, Stage *interStage, Stage *stageTwo) {
    stageOne->activate();
}

RocketState *LaunchState::getNextState() {
    return new SeparationState();
}

LaunchState::~LaunchState() = default;
