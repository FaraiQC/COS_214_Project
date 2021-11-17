#include "FalconNineBuilder.h"
#include "FalconNineCreator.h"
#include "StageOneCreator.h"
#include "StageTwoCreator.h"
#include "MerlinCreator.h"
#include "InterStageCreator.h"
#include "VacuumCreator.h"

FalconNineBuilder::FalconNineBuilder() {
    FalconNineCreator shellCreator;
    falconNine = dynamic_cast<FalconNine *>(shellCreator.createRocket());

}

void FalconNineBuilder::addElectronics() {
    cout << "Adding Falcon 9 Electronics..." << endl;
}

void FalconNineBuilder::addEngines() {
    cout << "Adding engines to falcon 9" << endl;

    if (falconNine->getStageOne() == nullptr || falconNine->getStageTwo() == nullptr) {
        cout << "Error: cannot add engines before stage one and two are both installed." << endl;
        return;
    }

    MerlinCreator merlinCreator;
    for (int i = 0; i < 9; ++i) {
        falconNine->getStageOne()->addEngine(merlinCreator.createEngine());
    }
    VacuumCreator vacuumCreator;
    falconNine->getStageTwo()->addEngine(vacuumCreator.createEngine());
}

void FalconNineBuilder::addStageOne() {
    cout << "Adding Stage One" << endl;
    StageOneCreator stageOneCreator;
    falconNine->setStageOne(dynamic_cast<StageOne *>(stageOneCreator.createStage("StageOne")));
}

void FalconNineBuilder::addInterStage() {
    cout << "Adding interstage with 4 Grid Fins" << endl;
    InterStageCreator interStageCreator;
    falconNine->setInterStage(dynamic_cast<InterStage *>(interStageCreator.createStage("Interstage")));
    falconNine->getInterStage()->setGridFins(4);
}

void FalconNineBuilder::addStageTwo() {
    cout << "Adding stage two" << endl;
    StageTwoCreator stageTwoCreator;
    falconNine->setStageTwo(dynamic_cast<StageTwo *>(stageTwoCreator.createStage("StageTwo")));
}

FalconNine *FalconNineBuilder::getRocket() {
    return falconNine;
}

FalconNineBuilder::~FalconNineBuilder() = default;
