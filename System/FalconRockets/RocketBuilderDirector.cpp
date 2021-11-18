#include "RocketBuilderDirector.h"

/**
 * @brief Construct a new Rocket Builder Director:: Rocket Builder Director object
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
 */
void RocketBuilderDirector::setBuilder(RocketBuilder *b)
{
    this->builder = b;
}

/**
 * @brief buid Falcon Nine rocket
 * 
 * @param id is the name/id of the rocket to be built.
 */
void RocketBuilderDirector::buildFalconNine(string id)
{
    if (!dynamic_cast<FalconNineBuilder *>(builder))
    {
        cout << " The current builder is not for falcon 9, set correct builder." << endl;
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
 */
void RocketBuilderDirector::buildFalconHeavy(string id)
{
    if (!dynamic_cast<FalconHeavyBuilder *>(builder))
    {
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

/**
 * @brief Destruct Object
 * 
 * @return RocketBuilderDirector::~ 
 */
RocketBuilderDirector::~RocketBuilderDirector() = default;
