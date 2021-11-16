#include "EngineFactory.h"

EngineFactory::EngineFactory() = default;

Engine *EngineFactory::createEngine() {
    return nullptr;
}

EngineFactory::~EngineFactory() = default;
