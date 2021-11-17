#include "StageTwo.h"
#include "thread"
#include "chrono"

StageTwo::StageTwo(string id) : Stage(id) {

}

void StageTwo::addEngine(Engine *engine) {
    engines[0] = engine;
}

void StageTwo::addCargo() {
    // TODO: Add Cargo type to the
}

void StageTwo::setSpaceCraft(Spacecraft *spacecraft) {
    this->capsule = spacecraft;
}

void StageTwo::activate() {
    cout << "Stage two is now taking off" << endl;
    engines[0]->turnOn();
    for (int i = 3; i > 0; --i) {
        cout << '*';
        this_thread::sleep_for(chrono::seconds(1));
    }
}

void StageTwo::deactivate() {
    cout << "Stage Two Engines will now turn Off" << endl;
    engines[0]->turnOff();
}

StageTwo::~StageTwo() = default;