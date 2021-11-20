#include "MerlinCreator.h"

/**
 * @brief Construct a new Merlin Creator:: Merlin Creator object
 * 
 */
MerlinCreator::MerlinCreator() = default;

/**
 * @brief factory method for MerlinEngine Object
 * 
 * @return Engine* 
 */
Engine *MerlinCreator::createEngine() {
    return new MerlinCore("");
}

/**
 * @brief Destroy the Merlin Creator:: Merlin Creator object
 * 
 */
MerlinCreator::~MerlinCreator() = default;
