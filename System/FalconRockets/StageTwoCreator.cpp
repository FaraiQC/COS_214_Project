#include "StageTwoCreator.h"

StageTwoCreator::StageTwoCreator() = default;

Stage *StageTwoCreator::createStage(string name) {
    return new StageTwo(name);
}

StageTwoCreator::~StageTwoCreator() = default;
