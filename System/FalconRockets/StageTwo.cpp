#include "StageTwo.h"
#include "thread"
#include "chrono"

StageTwo::StageTwo(string id) : Stage(id) {

}

void StageTwo::addEngine(Engine *engine) {
    engines.push_back(engine);
}

void StageTwo::addCargo() {
    // TODO: Add Cargo type to the
}

void StageTwo::setSpaceCraft(Spacecraft *spacecraft) {
    this->capsule = spacecraft;
}

void StageTwo::activate() {
    cout << endl;
    engines[0]->turnOn();
    cout << "Stage two is now taking off ";
    for (int i = 5; i > 0; --i) {
        cout << "! ";
        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << "\nSpacecraft has reached desired orbit." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    deactivate();

    cout << "Stage Two is now separating from Dragon Spacecraft ";
    for (int i = 5; i > 0; --i) {
        cout << "<--> ";
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << "\nDragon has now separated from Stage Two" << endl;

}

void StageTwo::deactivate() {
    cout << "Stage Two Engines will now turn Off" << endl;
    engines[0]->turnOff();
}

StageTwo::~StageTwo() = default;