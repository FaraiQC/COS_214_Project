#include "FalconNineBuilder.h"
#include "FalconNineCreator.h"

FalconNineBuilder::FalconNineBuilder() {
    // TODO : Call falcon 9 creator, then initialise the falconNine variable.
    FalconNineCreator shellCreator;
    falconNine = dynamic_cast<FalconNine *>(shellCreator.createRocket());
}

void FalconNineBuilder::addElectronics() {
    cout << "Adding Falcon 9 Electronics..." << endl;
}

void FalconNineBuilder::addEngines() {
    // TODO : Add correct amount and types of engines to the rocket.
}

void FalconNineBuilder::addStageOne() {
    // TODO : Add stage one section of the rocket.
}

void FalconNineBuilder::addInterStage() {
    // TODO : Add stage correct interstage section of the rocket.
}

void FalconNineBuilder::addStageTwo() {
    // TODO : Add stage one section of the rocket.
}

FalconNine *FalconNineBuilder::getRocket() {
    return falconNine;
}

FalconNineBuilder::~FalconNineBuilder() = default;
