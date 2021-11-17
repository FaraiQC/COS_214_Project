
#include "MerlinCore.h"

MerlinCore::MerlinCore(string EngineID) : Engine(EngineID, 845, "LOX/RP-1") {

}

void MerlinCore::turnOn() {
    cout << "Merline Core: ";
    Engine::turnOn();
}

void MerlinCore::turnOff() {
    cout << "Merline Core: ";
    Engine::turnOff();
}

MerlinCore::~MerlinCore() = default;
