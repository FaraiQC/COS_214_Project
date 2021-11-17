#include "Rocket.h"

Rocket::Rocket() {

}

void Rocket::setStageOne(StageOne *one) {
    stageOne = one;
}

void Rocket::setInterStage(InterStage *inter) {
    interStage = inter;
}

void Rocket::setStageTwo(StageTwo *two) {
    stageTwo = two;
}

void Rocket::setAllStages(StageOne *one, InterStage *inter, StageTwo *two) {
    stageOne = one;
    interStage = inter;
    stageTwo = two;
}

Rocket::~Rocket() {
    // TODO free all the pointers.
}

StageTwo *Rocket::getStageTwo() {
    return stageTwo;
}

StageOne *Rocket::getStageOne() {
    return stageOne;
}

InterStage *Rocket::getInterStage() {
    return interStage;
}

bool Rocket::launch() {
    cout << "Getting ready to launch..." << endl;
    rocketState->execute(stageOne, interStage, stageTwo);
    return false;
}

void Rocket::setName(string name) {
    id = name;
}

string Rocket::getName() {
    return id;
}
