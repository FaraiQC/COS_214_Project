#include "StageOne.h"
#include "thread"
#include "chrono"

StageOne::StageOne(string id) : Stage(id) {
}

void StageOne::addEngine(Engine *engine) {
    engines.push_back(engine);
}

void StageOne::activate() {
    cout << "Launching in:\n";
    for (int i = 10; i > 0; --i) {
        cout << i << std::endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    std::cout << "Lift off!!!!!!!!!!!!!\n";
    this_thread::sleep_for(chrono::seconds(5));
}

void StageOne::land() {

}

void StageOne::deactivate() {
    cout << " Engines are turning off..." << endl;
    for (int i = 0; i < engines.size(); ++i) {
        engines[i]->turnOff();
    }
}

StageOne::~StageOne() = default;
