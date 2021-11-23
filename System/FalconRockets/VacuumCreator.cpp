#include "VacuumCreator.h"

/**
 * @brief Construct a new Vacuum Creator:: Vacuum Creator object
 * 
 * 
 * @author Awelani Murovhi (u18335412)
 * 
 */
VacuumCreator::VacuumCreator() {

}

/**
 * @brief factory method for VacuumEngine
 * 
 * @return Engine* engine pointer
 * 
 * 
 * @author Awelani Murovhi (u18335412)
 */
Engine *VacuumCreator::createEngine() {
    return new VacuumEngine("");
}

/**
 * @brief Destroy the Vacuum Creator:: Vacuum Creator object
 * 
 * 
 * @author Awelani Murovhi (u18335412)
 * 
 */
VacuumCreator::~VacuumCreator() {

}
