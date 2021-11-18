#include "FalconHeavyBuilder.h"
#include "FalconHeavyCreator.h"
#include "InterStageCreator.h"
#include "StageTwoCreator.h"
#include "MerlinCreator.h"
#include "RocketBooster.h"
#include "StageOneCreator.h"
#include "VacuumCreator.h"

/**
 * @brief Construct a new Falcon Heavy Builder:: Falcon Heavy Builder object
 * 
 */
FalconHeavyBuilder::FalconHeavyBuilder()
{
    FalconHeavyCreator shellCreator;
    falconHeavy = dynamic_cast<FalconHeavy *>(shellCreator.createRocket());
}

/**
 * @brief function to add Falcon nine to the rocket
 * 
 */
void FalconHeavyBuilder::addElectronics()
{
    cout << "Adding electronics to falcon Heavy" << endl;
}

/**
 * @brief add specific engines to Falcon Heavy
 * 
 */
void FalconHeavyBuilder::addEngines()
{
    cout << "Adding falcon heavy engines" << endl;

    if (falconHeavy->getStageOne() == nullptr || falconHeavy->getStageTwo() == nullptr)
    {
        cout << "Error: cannot add engines before stage one and two are both installed." << endl;
        return;
    }

    MerlinCreator merlinCreator;
    for (int i = 0; i < 9; ++i)
    {
        falconHeavy->getStageOne()->addEngine(merlinCreator.createEngine());
    }

    addBoosters();

    VacuumCreator vacuumCreator;
    falconHeavy->getStageTwo()->addEngine(vacuumCreator.createEngine());
}


/**
 * @brief Add booster for to falcon heavy (two of them)
 * 
 */
void FalconHeavyBuilder::addBoosters()
{
    cout << "Adding Boosters to Falcon Heavy" << endl;

    RocketBooster *booster = new RocketBooster("Booster 1", 9);
    RocketBooster *booster2 = new RocketBooster("Booster 2", 9);
    falconHeavy->getStageOne()->addEngine(booster);
    falconHeavy->getStageOne()->addEngine(booster2);
}

/**
 * @brief add StageOne to Falcon heavy
 * 
 */
void FalconHeavyBuilder::addStageOne()
{
    cout << "Adding Stage One" << endl;
    StageOneCreator stageOneCreator;
    falconHeavy->setStageOne(dynamic_cast<StageOne *>(stageOneCreator.createStage("StageOne")));
}

/**
 * @brief  Install Interstage to the Falcon heavy
 * 
 */
void FalconHeavyBuilder::addInterStage()
{
    cout << "Adding Interstage with 12 Grid Fins" << endl;
    InterStageCreator interStageCreator;
    falconHeavy->setInterStage(dynamic_cast<InterStage *>(interStageCreator.createStage("InterStage")));
    falconHeavy->getInterStage()->setGridFins(12);
}

/**
 * @brief Install Stage two to Falcon heavy
 * 
 */
void FalconHeavyBuilder::addStageTwo()
{
    cout << "Adding Stage Two" << endl;
    StageTwoCreator stageTwoCreator;
    falconHeavy->setStageTwo(dynamic_cast<StageTwo *>(stageTwoCreator.createStage("stageTwo")));
}


/**
 * @brief getter for Falcon Heavy object
 * 
 * @return FalconHeavy* 
 */
FalconHeavy *FalconHeavyBuilder::getRocket()
{
    return falconHeavy;
}

/**
 * @brief Destroy the Falcon Heavy Builder:: Falcon Heavy Builder object
 * 
 */
FalconHeavyBuilder::~FalconHeavyBuilder()
{
}
