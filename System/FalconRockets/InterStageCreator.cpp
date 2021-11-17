#include "InterStageCreator.h"

InterStageCreator::InterStageCreator() = default;

Stage *InterStageCreator::createStage(string id) {
    return new InterStage(id, 0);
}

void InterStageCreator::setGridFins(int numberFins) {
    this->numberOfFins = numberFins;
}


InterStageCreator::~InterStageCreator() = default;
