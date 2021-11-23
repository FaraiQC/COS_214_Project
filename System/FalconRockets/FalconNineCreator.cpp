#include "FalconNineCreator.h"

/**
 * @brief Construct a new Falcon Nine Creator:: Falcon Nine Creator object
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
FalconNineCreator::FalconNineCreator() = default;

/**
 * @brief  creater new Falcon nine shell/container object
 * 
 * @return Rocket* 
 * 
 * @author Musa Mabasa (u18265163)
 */
Rocket *FalconNineCreator::createRocket()
{
    return new FalconNine();
}

/**
 * 
 * @brief Destroy the Falcon Nine Creator:: Falcon Nine Creator object
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
FalconNineCreator::~FalconNineCreator() = default;
