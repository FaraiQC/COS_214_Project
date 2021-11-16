#include "MerlinCreator.h"

MerlinCreator::MerlinCreator() = default;

Engine *MerlinCreator::createEngine() {
    return new MerlinCore("");
}

MerlinCreator::~MerlinCreator() = default;
