#include "InterStageCreator.h"

InterStageCreator::InterStageCreator() = default;

Stage *InterStageCreator::createStage(string id) {
    return new InterStage(id, 0);
}

InterStageCreator::~InterStageCreator() = default;
