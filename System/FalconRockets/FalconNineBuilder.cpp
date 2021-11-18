#include "FalconNineBuilder.h"
#include "FalconNineCreator.h"
#include "StageOneCreator.h"
#include "StageTwoCreator.h"
#include "MerlinCreator.h"
#include "InterStageCreator.h"
#include "VacuumCreator.h"
/**
 * @brief Construct a new Falcon Nine Builder:: Falcon Nine Builder object
 * 
 */
FalconNineBuilder::FalconNineBuilder() {
    FalconNineCreator shellCreator;
    falconNine = dynamic_cast<FalconNine *>(shellCreator.createRocket());

}

/**
 * @brief Add electronics to Falcon Nine
 * 
 */
void FalconNineBuilder::addElectronics() {
    cout << "Adding Falcon 9 Electronics..." << endl;
}


/**
 * @brief Add specific enfgines to Falcon Nine
 * 
 */
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

/**
 * @brief Add stage one to Falcon Nine
 * 
 */
void FalconNineBuilder::addStageOne() {
    cout << "Adding Stage One" << endl;
    StageOneCreator stageOneCreator;
    falconNine->setStageOne(dynamic_cast<StageOne *>(stageOneCreator.createStage("StageOne")));
}

/**
 * @brief Add Interstage to the Rocket
 * 
 */
void FalconNineBuilder::addInterStage() {
    cout << "Adding interstage with 4 Grid Fins" << endl;
    InterStageCreator interStageCreator;
    falconNine->setInterStage(dynamic_cast<InterStage *>(interStageCreator.createStage("Interstage")));
    falconNine->getInterStage()->setGridFins(4);
}
/**
 * @brief Add stage two to Falcon Nine
 * 
 */
void FalconNineBuilder::addStageTwo() {
    cout << "Adding stage two" << endl;
    StageTwoCreator stageTwoCreator;
    falconNine->setStageTwo(dynamic_cast<StageTwo *>(stageTwoCreator.createStage("StageTwo")));
}

/**
 * @brief getter for Falcon Nine object
 * 
 * @return FalconNine* 
 */
FalconNine *FalconNineBuilder::getRocket() {
    return falconNine;
}

/**
 * @brief Destroy the Falcon Nine Builder:: Falcon Nine Builder object
 * 
 */
FalconNineBuilder::~FalconNineBuilder() = default;
