#include "InterStage.h"
#include "thread"
#include "chrono"

/**
 * @brief Construct a new Inter Stage:: Inter Stage object
 * 
 * @param name is the id of the inter stage
 * @param numberOfFins the number of interstage grid fins which are used for landing stage one
 */
InterStage::InterStage(string name, int numberOfFins) : Stage(name) {
    numberOfGridFins = numberOfFins;
}

/**
 * @brief setter for grid fins
 * 
 */
void InterStage::setGridFins(int) {
    numberOfGridFins = 4;
}

/**
 * @brief handles the separation of stage one and stage two
 * 
 */
void InterStage::separate() {
    cout << endl;
    cout << "Separation Stage has begun: " << endl;
    cout << "Stage One and Stage Two are now separating ";
    for (int i = 5; i > 0; --i) {
        cout << "<-> " << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << "\nStage One and Stage Two are now detached.\nFirst Stage is now returning back to earth." << endl;
}

/**
 * @brief calls the separation function
 * 
 */
void InterStage::activate() {
    separate();
}

/**
 * @brief Destroy the Inter Stage:: Inter Stage object
 * 
 */
InterStage::~InterStage() = default;
