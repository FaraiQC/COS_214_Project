#include "RocketBuilderDirector.h"

RocketBuilderDirector::RocketBuilderDirector() {
    builder = new FalconNineBuilder();
}

void RocketBuilderDirector::setBuilder(RocketBuilder *b) {
    this->builder = b;
}

void RocketBuilderDirector::buildFalconNine(string id) {
    if (!dynamic_cast<FalconNineBuilder *>(builder)) {
        cout << " The current builder is not for falcon heavy, set correct builder." << endl;
        return;
    }

    builder->addElectronics();
    builder->addStageOne();
    builder->addStageTwo();
    builder->addEngines();
    builder->addInterStage();

    dynamic_cast<FalconNineBuilder *>(builder)->getRocket()->setName(id);
}

void RocketBuilderDirector::buildFalconHeavy(string id) {
    if (!dynamic_cast<FalconHeavyBuilder *>(builder)) {
        cout << " The current builder is not for falcon heavy, set correct builder." << endl;
        return;
    }

    builder->addElectronics();
    builder->addStageOne();
    builder->addStageTwo();
    builder->addEngines();
    builder->addInterStage();

    dynamic_cast<FalconHeavyBuilder *>(builder)->getRocket()->setName(id);
}


RocketBuilderDirector::~ RocketBuilderDirector() = default;

