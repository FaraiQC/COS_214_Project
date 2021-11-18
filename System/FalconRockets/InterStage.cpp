#include "InterStage.h"
#include "thread"
#include "chrono"

InterStage::InterStage(string name, int numberOfFins) : Stage(name) {
    numberOfGridFins = numberOfFins;
}

void InterStage::setGridFins(int) {
    numberOfGridFins = 4;
}

void InterStage::separate() {
    cout << endl;
    cout << "Separation Stage has begun: " << endl;
    cout << "Stage One and Stage Two are now separating ";
    for (int i = 5; i > 0; --i) {
        cout << "<-> ";
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << "\nStage One and Stage Two are now detached.\nFirst Stage is now returning back to earth." << endl;
}

void InterStage::activate() {
    separate();
}

InterStage::~InterStage() = default;
