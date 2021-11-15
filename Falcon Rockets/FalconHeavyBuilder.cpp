#include "FalconHeavyBuilder.h"
#include "FalconHeavyCreator.h"

FalconHeavyBuilder::FalconHeavyBuilder() {
    // TODO : Call falcon heavy creator, then initialise the falconNine variable.
    FalconHeavyCreator *shellCreator = new FalconHeavyCreator();
    falconHeavy = dynamic_cast<FalconHeavy *>(shellCreator->createRocket());
}

void FalconHeavyBuilder::addElectronics() {
    // TODO : Add falcon 9 electronics to the rocket.
}

void FalconHeavyBuilder::addEngines() {
    // TODO : add engines using engine factory .
}

void FalconHeavyBuilder::addStageOne() {
    // TODO : add stage one.
}

void FalconHeavyBuilder::addInterStage() {
    // TODO : add inter stage.
}

void FalconHeavyBuilder::addStageTwo() {
    // TODO : add stage two.
}

FalconHeavy *FalconHeavyBuilder::getRocket() {
    return falconHeavy;
}


FalconHeavyBuilder::~FalconHeavyBuilder() {

}

