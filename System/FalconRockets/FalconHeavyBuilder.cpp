#include "FalconHeavyBuilder.h"
#include "FalconHeavyCreator.h"
#include "InterStageCreator.h"
#include "StageTwoCreator.h"
#include "MerlinCreator.h"
#include "RocketBooster.h"
#include "StageOneCreator.h"
#include "VacuumCreator.h"
#include <sstream>

FalconHeavyBuilder::FalconHeavyBuilder() {
    FalconHeavyCreator shellCreator;
    falconHeavy = dynamic_cast<FalconHeavy *>(shellCreator.createRocket());
}

void FalconHeavyBuilder::addElectronics() {
    cout << "Adding electronics to falcon Heavy" << endl;
}

void FalconHeavyBuilder::addEngines() {
    cout << "Adding falcon heavy engines" << endl;

    if (falconHeavy->getStageOne() == nullptr || falconHeavy->getStageTwo() == nullptr) {
        cout << "Error: cannot add engines before stage one and two are both installed." << endl;
        return;
    }

    falconHeavy->getStageOne()->setNum(27);
    falconHeavy->getStageTwo()->setNum(1);
    MerlinCreator merlinCreator;
    for (int i = 0; i < 27; ++i) {
        
        Engine* engine = merlinCreator.createEngine();
        string id="ENG-";
        string num;
        string num2;
        stringstream ss;
        stringstream str;
        if(i<9)
        {
            int j=0;
            int val = i+1;
            ss<<j;
            ss>>num;
            str<<val;
            str>>num2;
            num+=num2;
            id+=num;
        }
        else
        {
            ss<<i+1;
            ss>>num;
            id+=num;
        }
        engine->setId(id);
        falconHeavy->getStageOne()->addEngine(engine);
    }

    addBoosters();
    VacuumCreator vacuumCreator;
    Engine* engine2 = vacuumCreator.createEngine();
    engine2->setId("VAC-01");
    falconHeavy->getStageTwo()->addEngine(engine2);
}

void FalconHeavyBuilder::addBoosters() {
    cout << "Adding Boosters to Falcon Heavy" << endl;

    RocketBooster booster("Booster 1");
    RocketBooster booster2("Booster 2");
    falconHeavy->getStageOne()->addEngine(&booster);
    falconHeavy->getStageOne()->addEngine(&booster2);
}


void FalconHeavyBuilder::addStageOne() {
    cout << "Adding Stage One" << endl;
    StageOneCreator stageOneCreator;
    falconHeavy->setStageOne(dynamic_cast<StageOne *>(stageOneCreator.createStage("StageOne")));
}

void FalconHeavyBuilder::addInterStage() {
    cout << "Adding Interstage with 12 Grid Fins" << endl;
    InterStageCreator interStageCreator;
    falconHeavy->setInterStage(dynamic_cast<InterStage *>(interStageCreator.createStage("InterStage")));
    falconHeavy->getInterStage()->setGridFins(12);
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


