#include "FalconNineBuilder.h"
#include "FalconNineCreator.h"
#include "StageOneCreator.h"
#include "StageTwoCreator.h"
#include "MerlinCreator.h"
#include "InterStageCreator.h"
#include "VacuumCreator.h"
#include <sstream>

/**
 * @brief Construct a new Falcon Nine Builder:: Falcon Nine Builder object
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u20451696)
 * 
 */
FalconNineBuilder::FalconNineBuilder() {
    FalconNineCreator shellCreator;
    falconNine = dynamic_cast<FalconNine *>(shellCreator.createRocket());
}

/**
 * @brief Add electronics to Falcon Nine
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u20451696)
 * 
 */
void FalconNineBuilder::addElectronics() {
    std::cout
        << "\n\t\tADDING ELECTRONICS\n"
        << std::endl;
}


/**
 * @brief Add specific enfgines to Falcon Nine
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u20451696)
 */
void FalconNineBuilder::addEngines() {
    std::cout
        << "\n\t\tADDING FALCON 9 ENGINE\n";

    if (falconNine->getStageOne() == nullptr || falconNine->getStageTwo() == nullptr) {
        std::cout
            << "\t\t\tFital Error: cannot add engines before stage one and two are both installed"
            << std::endl;

        return;
    }
    falconNine->getStageOne()->setType("Falcon9");
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

    std::cout
        << "\t\t\tSUCCESS\n";
}

/**
 * @brief Add stage one to Falcon Nine
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u20451696)
 * 
 */
void FalconNineBuilder::addStageOne() {
    std::cout
        << "\n\t\tADDING STAGE ONE\n";
    StageOneCreator stageOneCreator;
    falconNine->setStageOne(dynamic_cast<StageOne *>(stageOneCreator.createStage("StageOne")));
    std::cout
        << "\t\t\tSUCCESS\n";
}

/**
 * @brief Add Interstage to the Rocket
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u20451696)
 * 
 */
void FalconNineBuilder::addInterStage() {
    std::cout
        << "\n\t\tADDING INTERSTAGE\n";
    InterStageCreator interStageCreator;
    falconNine->setInterStage(dynamic_cast<InterStage *>(interStageCreator.createStage("Interstage")));
    falconNine->getInterStage()->setGridFins(4);

    std::cout
        << "\t\t\tSUCCESS: complemented with a set of 4 Grid Fins\n";
}

/**
 * @brief Add stage two to Falcon Nine
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
void FalconNineBuilder::addStageTwo() {
    std::cout
        << "\n\t\tADDING STAGE TWO\n";
    StageTwoCreator stageTwoCreator;
    falconNine->setStageTwo(dynamic_cast<StageTwo *>(stageTwoCreator.createStage("StageTwo")));
    
    std::cout
        << "\t\t\tSUCCESS\n";
}

/**
 * @brief getter for Falcon Nine object
 * 
 * @return FalconNine* 
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
FalconNine *FalconNineBuilder::getRocket() {
    return falconNine;
}

/**
 * @brief Destroy the Falcon Nine Builder:: Falcon Nine Builder object
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
FalconNineBuilder::~FalconNineBuilder() = default;
