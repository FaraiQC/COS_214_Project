#include "EngineFactory.h"

/**
 * @brief Construct a new Engine Factory:: Engine Factory object
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
EngineFactory::EngineFactory() = default;

/**
 * @brief abstract factory method, return null since its it's for abstract Engine
 * 
 * @return null
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
Engine *EngineFactory::createEngine() {
    return nullptr;
}

/**
 * @brief Destroy the Engine Factory:: Engine Factory object
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
EngineFactory::~EngineFactory() = default;
