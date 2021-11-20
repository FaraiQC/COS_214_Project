#include "StageOneCreator.h"

/**
 * @brief Construct a new Stage One Creator:: Stage One Creator object
 * 
 */
StageOneCreator::StageOneCreator() = default;

/**
 * @brief factory method for creatinng StageOne object
 * 
 * @param id  stage id
 * @return Stage* stage one pointer
 */
Stage *StageOneCreator::createStage(string id)
{
    return new StageOne(id);
}

/**
 * @brief Destroy the Stage One Creator:: Stage One Creator object
 * 
 */
StageOneCreator::~StageOneCreator() = default;
