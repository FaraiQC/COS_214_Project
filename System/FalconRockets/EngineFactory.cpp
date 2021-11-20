#include "EngineFactory.h"

/**
 * @brief Construct a new Engine Factory:: Engine Factory object
 * 
 */
EngineFactory::EngineFactory() = default;

/**
 * @brief abstract factory method, return null since its it's for abstract Engine
 * 
 * @return null
 */
Engine *EngineFactory::createEngine() {
    return nullptr;
}

/**
 * @brief Destroy the Engine Factory:: Engine Factory object
 * 
 */
EngineFactory::~EngineFactory() = default;
