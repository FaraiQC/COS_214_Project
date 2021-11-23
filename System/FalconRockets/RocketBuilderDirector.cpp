#include "RocketBuilderDirector.h"

/**
 * @brief Construct a new Rocket Builder Director:: Rocket Builder Director object
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
RocketBuilderDirector::RocketBuilderDirector()
{
    builder = new FalconNineBuilder();
}

/**
 * @brief setter for builder rocket
 * 
 * @param b builder object (FalconNineBuilder/FalconHeavyBuilder) 
 * 
 * @author Musa Mabasa (u18265163)
 */
void RocketBuilderDirector::setBuilder(RocketBuilder *b)
{
    this->builder = b;
}

/**
 * @brief buid Falcon Nine rocket
 * 
 * @param id is the name/id of the rocket to be built.
 * 
 * @authors Musa Mabasa (u18265163), Malope Elphus (u20451696)
 */
void RocketBuilderDirector::buildFalconNine(string id)
{
    if (!dynamic_cast<FalconNineBuilder *>(builder))
    {
        std::cout
            << "\n\t\t\tError: current builder is not for falcon 9, set correct builder\n";
        return;
    }

    builder->addElectronics();
    builder->addStageOne();
    builder->addStageTwo();
    builder->addEngines();
    builder->addInterStage();

    dynamic_cast<FalconNineBuilder *>(builder)->getRocket()->setName(id);
}

/**
 * @brief build Falcon Heavy rocket
 * 
 * @param id is the id of the rocket to be built
 * 
 * @authors Musa Mabasa (u18265163), Malope Elphus (u20451696)
 */
void RocketBuilderDirector::buildFalconHeavy(string id)
{
    if (!dynamic_cast<FalconHeavyBuilder *>(builder))
    {
        std::cout
            << "\n\t\t\tError: current builder is not for falcon Heavy, set correct builder\n";
        return;
    }

    builder->addElectronics();
    builder->addStageOne();
    builder->addStageTwo();
    builder->addEngines();
    builder->addInterStage();

    dynamic_cast<FalconHeavyBuilder *>(builder)->getRocket()->setName(id);
}

/**
 * @brief Destruct Object
 * 
 * @return RocketBuilderDirector::~ 
 * 
 * @author Musa Mabasa (u18265163)
 */
RocketBuilderDirector::~RocketBuilderDirector() = default;
