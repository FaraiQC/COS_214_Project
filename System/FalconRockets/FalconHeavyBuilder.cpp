#include "FalconHeavyBuilder.h"
#include "FalconHeavyCreator.h"
#include "InterStageCreator.h"
#include "StageTwoCreator.h"
#include "MerlinCreator.h"
#include "RocketBooster.h"
#include "StageOneCreator.h"
#include "VacuumCreator.h"
#include <sstream>

/**
 * @brief Construct a new Falcon Heavy Builder:: Falcon Heavy Builder object
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u20451696)
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
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u20451696)
 * 
 */
void FalconHeavyBuilder::addElectronics(){
    std::cout
        << "\n\t\tADDING ELECTRONICS\n"
        << std::endl;
}

/**
 * @brief add specific engines to Falcon Heavy
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u20451696)
 * 
 */
void FalconHeavyBuilder::addEngines(){

    std::cout
        << "\n\t\tADDING FALCON HEAVY ENGINE\n";

    if (falconHeavy->getStageOne() == nullptr || falconHeavy->getStageTwo() == nullptr){
        std::cout
            << "\t\t\tFital Error: cannot add engines before stage one and two are both installed"
            << std::endl;

        return;
    }

    falconHeavy->getStageOne()->setType("FalconHeavy");
    falconHeavy->getStageOne()->setNum(27);
    falconHeavy->getStageTwo()->setNum(1);
    MerlinCreator merlinCreator;
    for (int i = 0; i < 27; ++i)
    {

        Engine *engine = merlinCreator.createEngine();
        string id = "ENG-";
        string num;
        string num2;
        stringstream ss;
        stringstream str;
        if (i < 9)
        {
            int j = 0;
            int val = i + 1;
            ss << j;
            ss >> num;
            str << val;
            str >> num2;
            num += num2;
            id += num;
        }
        else
        {
            ss << i + 1;
            ss >> num;
            id += num;
        }
        engine->setId(id);
        falconHeavy->getStageOne()->addEngine(engine);

        std::cout
            << "\t\t\tSUCCESS\n";
    }

    addBoosters();
    VacuumCreator vacuumCreator;
    Engine *engine2 = vacuumCreator.createEngine();
    engine2->setId("VAC-01");
    falconHeavy->getStageTwo()->addEngine(engine2);
}

/**
 * @brief Add booster for to falcon heavy (two of them)
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u20451696)
 * 
 */
void FalconHeavyBuilder::addBoosters(){
    std::cout
        << "\n\t\tADDING BOOSTERS TO FALCON HEAVY\n";

    RocketBooster *booster = new RocketBooster("Booster 1", 9);
    RocketBooster *booster2 = new RocketBooster("Booster 2", 9);
    falconHeavy->getStageOne()->addEngine(booster);
    falconHeavy->getStageOne()->addEngine(booster2);

    std::cout
        << "\t\t\tSUCCESS\n";
}

/**
 * @brief add StageOne to Falcon heavy
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u20451696)
 * 
 */
void FalconHeavyBuilder::addStageOne(){
    std::cout
        << "\n\t\tADDING STAGE ONE\n";

    StageOneCreator stageOneCreator;
    falconHeavy->setStageOne(dynamic_cast<StageOne *>(stageOneCreator.createStage("StageOne")));

    std::cout
        << "\t\t\tSUCCESS\n";
}

/**
 * @brief  Install Interstage to the Falcon heavy
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
void FalconHeavyBuilder::addInterStage(){
    std::cout
        << "\n\t\tADDING INTERSTAGE\n";
    InterStageCreator interStageCreator;
    falconHeavy->setInterStage(dynamic_cast<InterStage *>(interStageCreator.createStage("InterStage")));
    falconHeavy->getInterStage()->setGridFins(12);
    
    std::cout
        << "\t\t\tSUCCESS: complemented with a set of 12 Grid Fins\n";
}

/**
 * @brief Install Stage two to Falcon heavy
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
void FalconHeavyBuilder::addStageTwo(){
    std::cout
        << "\n\t\tADDING STAGE TWO\n";
    StageTwoCreator stageTwoCreator;
    falconHeavy->setStageTwo(dynamic_cast<StageTwo *>(stageTwoCreator.createStage("stageTwo")));

    std::cout
        << "\t\t\tSUCCESS\n";
}

/**
 * @brief getter for Falcon Heavy object
 * 
 * @return FalconHeavy* 
 * 
 * @author Awelani Murovhi (u18335412)
 */
FalconHeavy *FalconHeavyBuilder::getRocket(){
    return falconHeavy;
}

/**
 * @brief Destroy the Falcon Heavy Builder:: Falcon Heavy Builder object
 * 
 * @author Awelani Murovhi (u18335412)
 * 
 */
FalconHeavyBuilder::~FalconHeavyBuilder(){
}