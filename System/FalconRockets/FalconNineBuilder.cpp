#include "FalconNineBuilder.h"
#include "FalconNineCreator.h"
#include "StageOneCreator.h"
#include "StageTwoCreator.h"
#include "MerlinCreator.h"
#include "InterStageCreator.h"
#include "VacuumCreator.h"
#include <sstream>

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

    falconNine->getStageOne()->setNum(9);
    falconNine->getStageTwo()->setNum(1);
    MerlinCreator merlinCreator;
    for (int i = 0; i < 9; ++i) {
        Engine* engine = merlinCreator.createEngine();
         string id="ENG-";
        string num;
        string num2;
        stringstream ss;
        stringstream str;
        
        int j=0;
        int val = i+1;
        ss<<j;
        ss>>num;
        str<<val;
        str>>num2;
        num+=num2;
        id+=num;
        
        engine->setId(id);
        falconNine->getStageOne()->addEngine(engine);
    }
    VacuumCreator vacuumCreator;
    Engine* engine2 = vacuumCreator.createEngine();
    engine2->setId("VAC-01");
    falconNine->getStageTwo()->addEngine(engine2);
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
