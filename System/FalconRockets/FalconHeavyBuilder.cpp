#include "FalconHeavyBuilder.h"
#include "FalconHeavyCreator.h"
#include "InterStageCreator.h"
#include "StageTwoCreator.h"
#include "MerlinCreator.h"
#include "RocketBooster.h"

FalconHeavyBuilder::FalconHeavyBuilder() {
    cout << "Creating falcon 9 shell" << endl;
    FalconHeavyCreator shellCreator;
    falconHeavy = dynamic_cast<FalconHeavy *>(shellCreator.createRocket());
}

void FalconHeavyBuilder::addElectronics() {
    cout << "Adding electronics to falcon 9" << endl;
}

void FalconHeavyBuilder::addEngines() {
    cout << "Adding falcon 9 engines" << endl;
    MerlinCreator merlinCreator;
    for (int i = 0; i < 9; ++i) {
        falconHeavy->getStageOne()->addEngine(merlinCreator.createEngine());
    }
    RocketBooster booster("Booster 1");
    RocketBooster booster2("Booster 2");
    falconHeavy->getStageOne()->addEngine(&booster);
    falconHeavy->getStageOne()->addEngine(&booster2);
}

void FalconHeavyBuilder::addStageOne() {
    cout << "Adding Stage One" << endl;
    //falconHeavy->setStageOne();
}

void FalconHeavyBuilder::addInterStage() {
    cout << "Adding Interstage" << endl;
    InterStageCreator interStageCreator;
    falconHeavy->setInterStage(dynamic_cast<InterStage *>(interStageCreator.createStage("interStage")));
}

void FalconHeavyBuilder::addStageTwo() {
    cout << "Adding Stage Two" << endl;
    StageTwoCreator stageTwoCreator;
    falconHeavy->setStageTwo(dynamic_cast<StageTwo *>(stageTwoCreator.createStage("stageTwo")));
}

FalconHeavy *FalconHeavyBuilder::getRocket() {
    return falconHeavy;
}


FalconHeavyBuilder::~FalconHeavyBuilder() {

}

