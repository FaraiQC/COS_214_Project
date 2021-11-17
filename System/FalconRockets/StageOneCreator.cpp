#include "StageOneCreator.h"

StageOneCreator::StageOneCreator() = default;

Stage *StageOneCreator::createStage(string id) {
    return new StageOne(id);
}

StageOneCreator::~StageOneCreator() = default;
