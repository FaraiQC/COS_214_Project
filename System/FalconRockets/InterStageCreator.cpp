#include "InterStageCreator.h"

/**
 * @brief Construct a new Inter Stage Creator:: Inter Stage Creator object
 * 
 */
InterStageCreator::InterStageCreator() = default;

/**
 * @brief factory method for interStage Object
 * 
 * @param id 
 * @return Stage* 
 */
Stage *InterStageCreator::createStage(string id) {
    return new InterStage(id, 0);
}

/**
 * @brief setter for gridFins 
 * 
 * @param numberFins number of grid fins
 */
void InterStageCreator::setGridFins(int numberFins) {
    this->numberOfFins = numberFins;
}

/**
 * @brief Destroy the Inter Stage Creator:: Inter Stage Creator object
 * 
 */
InterStageCreator::~InterStageCreator() = default;
