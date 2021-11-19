#include "FalconHeavyCreator.h"

/**
 * @brief Construct a new Falcon Heavy Creator:: Falcon Heavy Creator object
 * 
 */
FalconHeavyCreator::FalconHeavyCreator() = default;

/**
 * @brief  create and return Falcon Heavy shell/container Object
 * 
 * @return Rocket* 
 */
Rocket *FalconHeavyCreator::createRocket() {
    return new FalconHeavy();
}

/**
 * @brief Destroy the Falcon Heavy Creator:: Falcon Heavy Creator object
 * 
 */
FalconHeavyCreator::~FalconHeavyCreator() = default;
