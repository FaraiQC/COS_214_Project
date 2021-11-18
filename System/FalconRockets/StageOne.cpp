#include "StageOne.h"
#include "thread"
#include "chrono"

StageOne::StageOne(string id) : Stage(id) {
}

void StageOne::addEngine(Engine *engine) {
    engines.push_back(engine);
}

void StageOne::activate() {
    for (Engine *e : engines) {
        e->turnOn();
    }

    cout << "Launching in:\n";

    for (int i = 10; i > 0; --i) {
        cout << i << std::endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    std::cout << "Lift off ";
    for (int i = 0; i < 5; ++i) {
        cout << " ! ";
        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << endl;

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
