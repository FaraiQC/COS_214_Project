#include "Stage.h"

Stage::Stage(string name) {
    this->name = name;
}

string Stage::getName() {
    return name;
}

Stage::~Stage() = default;
