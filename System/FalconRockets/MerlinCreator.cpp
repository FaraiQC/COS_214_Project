#include "MerlinCreator.h"

/**
 * @brief Construct a new Merlin Creator:: Merlin Creator object
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
MerlinCreator::MerlinCreator() = default;

/**
 * @brief factory method for MerlinEngine Object
 * 
 * @return Engine* 
 * 
 * @author Musa Mabasa (u18265163)
 */
Engine *MerlinCreator::createEngine() {
    return new MerlinCore("");
}

/**
 * @brief Destroy the Merlin Creator:: Merlin Creator object
 * 
 * @authors Musa Mabasa (u18265163)
 * 
 */
MerlinCreator::~MerlinCreator() = default;
