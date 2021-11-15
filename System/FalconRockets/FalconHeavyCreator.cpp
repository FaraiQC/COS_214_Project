#include "FalconHeavyCreator.h"

FalconHeavyCreator::FalconHeavyCreator() = default;

Rocket *FalconHeavyCreator::createRocket() {
    return new FalconHeavy();
}

FalconHeavyCreator::~FalconHeavyCreator() = default;
