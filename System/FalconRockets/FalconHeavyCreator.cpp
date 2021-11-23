#include "FalconHeavyCreator.h"

/**
 * @brief Construct a new Falcon Heavy Creator:: Falcon Heavy Creator object
 * 
 * @authors Malope Elphus (u20451696)
 * 
 */
FalconHeavyCreator::FalconHeavyCreator() = default;

/**
 * @brief  create and return Falcon Heavy shell/container Object
 * 
 * @return Rocket* 
 * 
 * @authors Malope Elphus (u20451696)
 */
Rocket *FalconHeavyCreator::createRocket() {
    return new FalconHeavy();
}

/**
 * @brief Destroy the Falcon Heavy Creator:: Falcon Heavy Creator object
 * 
 * @authors Malope Elphus (u20451696)
 * 
 */
FalconHeavyCreator::~FalconHeavyCreator() = default;
