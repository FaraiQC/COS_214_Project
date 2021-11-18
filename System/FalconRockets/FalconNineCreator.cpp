#include "FalconNineCreator.h"

/**
 * @brief Construct a new Falcon Nine Creator:: Falcon Nine Creator object
 * 
 */
FalconNineCreator::FalconNineCreator() = default;

/**
 * @brief  creater new Falcon nine shell/container object
 * 
 * @return Rocket* 
 */
Rocket *FalconNineCreator::createRocket()
{
    return new FalconNine();
}

/**
 * 
 * @brief Destroy the Falcon Nine Creator:: Falcon Nine Creator object
 * 
 */
FalconNineCreator::~FalconNineCreator() = default;
