#include "VacuumCreator.h"

/**
 * @brief Construct a new Vacuum Creator:: Vacuum Creator object
 * 
 */
VacuumCreator::VacuumCreator() {

}

/**
 * @brief factory method for VacuumEngine
 * 
 * @return Engine* engine pointer
 */
Engine *VacuumCreator::createEngine() {
    return new VacuumEngine("");
}

/**
 * @brief Destroy the Vacuum Creator:: Vacuum Creator object
 * 
 */
VacuumCreator::~VacuumCreator() {

}
