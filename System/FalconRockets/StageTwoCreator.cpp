#include "StageTwoCreator.h"

/**
 * @brief Construct a new Stage Two Creator:: Stage Two Creator object
 * 
 * 
 * @author Awelani Murovhi (u18335412)
 * 
 */
StageTwoCreator::StageTwoCreator() = default;

/**
 * @brief factory method for creating StageTwo Object
 * 
 * @param name name/id of the stage
 * @return Stage*  StageTwo pointer 
 * 
 * 
 * @author Awelani Murovhi (u18335412)
 */
Stage *StageTwoCreator::createStage(string name) {
    return new StageTwo(name);
}

/**
 * @brief Destroy the Stage Two Creator:: Stage Two Creator object
 * 
 * 
 * @author Awelani Murovhi (u18335412)
 * 
 */
StageTwoCreator::~StageTwoCreator() = default;
