#include "StageTwo.h"

StageTwo::StageTwo(string id) : Stage(id) {

}

void StageTwo::addEngine(Engine *) {
    // TODO: Add Engine to the engine list.
}

void StageTwo::addCargo() {
    // TODO: Add Cargo type to the
}

void StageTwo::setSpaceCraft(Spacecraft *spacecraft) {
    this->capsule = spacecraft;
}


StageTwo::~StageTwo() = default;


