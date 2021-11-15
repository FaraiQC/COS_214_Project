#include "RocketBuilderDirector.h"

RocketBuilderDirector::RocketBuilderDirector() {
    builder = new FalconNineBuilder();
}

void RocketBuilderDirector::setBuilder(RocketBuilder *b) {
    this->builder = b;
}

FalconNine RocketBuilderDirector::buildFalconNine() {
    builder->addElectronics();
    builder->addEngines();
    builder->addInterStage();
    builder->addStageOne();
    builder->addStageTwo();
    return FalconNine();
}

FalconHeavy RocketBuilderDirector::buildFalconHeavy() {
    builder->addElectronics();
    builder->addEngines();
    builder->addInterStage();
    builder->addStageOne();
    builder->addStageTwo();
    return FalconHeavy();
}


RocketBuilderDirector::~ RocketBuilderDirector() = default;

