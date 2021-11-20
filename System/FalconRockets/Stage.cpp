#include "Stage.h"

/**
 * @brief Construct a new Stage:: Stage object
 * 
 * @param name name of the stage
 */
Stage::Stage(string name) {
    this->name = name;
}

/**
 * @brief getter for the stage
 * 
 * @return string 
 */
string Stage::getName() {
    return name;
}

/**
 * @brief turns off engines
 * 
 */
void Stage::deactivate() {

}

/**
 * @brief Destroy the Stage:: Stage object
 * 
 */
Stage::~Stage() = default;
