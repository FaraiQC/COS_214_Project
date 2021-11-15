#include "FalconNineCreator.h"

FalconNineCreator::FalconNineCreator() = default;

Rocket *FalconNineCreator::createRocket() {
    return new FalconNine();
}

FalconNineCreator::~FalconNineCreator() = default;
