#include "Stage.h"

Stage::Stage(string name) {
    this->name = name;
}

string Stage::getName() {
    return name;
}

void Stage::deactivate() {

}

Stage::~Stage() = default;
