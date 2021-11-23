#include "StageOneCreator.h"

/**
 * @brief Construct a new Stage One Creator:: Stage One Creator object
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
StageOneCreator::StageOneCreator() = default;

/**
 * @brief factory method for creatinng StageOne object
 * 
 * @param id  stage id
 * @return Stage* stage one pointer
 * 
 * @author Musa Mabasa (u18265163)
 */
Stage *StageOneCreator::createStage(string id)
{
    return new StageOne(id);
}

/**
 * @brief Destroy the Stage One Creator:: Stage One Creator object
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
StageOneCreator::~StageOneCreator() = default;
