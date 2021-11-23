#include "InterStageCreator.h"

/**
 * @brief Construct a new Inter Stage Creator:: Inter Stage Creator object
 * 
 * @author Malope Elphus (u20451696)
 */
InterStageCreator::InterStageCreator() = default;

/**
 * @brief factory method for interStage Object
 * 
 * @param id 
 * @return Stage* 
 * 
 * @author Malope Elphus (u20451696)
 */
Stage *InterStageCreator::createStage(string id) {
    return new InterStage(id, 0);
}

/**
 * @brief setter for gridFins 
 * 
 * @param numberFins number of grid fins
 * 
 * @author Malope Elphus (u20451696)
 */
void InterStageCreator::setGridFins(int numberFins) {
    this->numberOfFins = numberFins;
}

/**
 * @brief Destroy the Inter Stage Creator:: Inter Stage Creator object
 * 
 * @author Malope Elphus (u20451696)
 */
InterStageCreator::~InterStageCreator() = default;
