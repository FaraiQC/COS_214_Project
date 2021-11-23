#include "Stage.h"

/**
 * @brief Construct a new Stage:: Stage object
 * 
 * @param name name of the stage
 * 
 * @author Awelani Murovhi (u18335412)
 */
Stage::Stage(string name) {
    this->name = name;
}

/**
 * @brief getter for the stage
 * 
 * @return string 
 * 
 * @author Awelani Murovhi (u18335412)
 */
string Stage::getName() {
    return name;
}

/**
 * @brief turns off engines
 * 
 * @author Awelani Murovhi (u18335412)
 * 
 */
void Stage::deactivate() {

}

/**
 * @brief Destroy the Stage:: Stage object
 * 
 * @author Awelani Murovhi (u18335412)
 * 
 */
Stage::~Stage() = default;
