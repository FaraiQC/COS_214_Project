#include "StageOne.h"

StageOne::StageOne(string id) : Stage(id) {
}

void StageOne::addEngine(Engine *engine) {
    engines.push_back(engine);
}

StageOne::~StageOne() = default;
