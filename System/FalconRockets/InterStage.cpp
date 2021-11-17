#include "InterStage.h"

InterStage::InterStage(string name, int numberOfFins) : Stage(name) {
    numberOfGridFins = numberOfFins;
}

void InterStage::setGridFins(int) {
    numberOfGridFins = 4;
}

void InterStage::separate() {

}

void InterStage::activate() {

}

InterStage::~InterStage() = default;
