#include "RocketBooster.h"

/**
 * @brief Construct a new Rocket Booster:: Rocket Booster object
 * 
 * @param id is the booseter name/id
 * @param NumberOfEngines the number of engines to add to the booster
 */
RocketBooster::RocketBooster(string id, int NumberOfEngines) : Engine(id, 845, "PX/L1") {
    numEngines = NumberOfEngines;
    MerlinCreator merlinCreator;
    for (int i = 0; i < NumberOfEngines; ++i) {
        add(merlinCreator.createEngine());
    }
}

/**
 * @brief append an engine to the list of engines
 * 
 * @param engine engiene pointer
 */
void RocketBooster::add(Engine *engine) {
    engines.push_back(engine);
}

/**
 * @brief removes engine to the list of engines
 * 
 * @param engine engine pointer
 */
void RocketBooster::remove(Engine *engine) {
    // TODO: Remove specified engine from the collection.
}

/**
 * @brief getter for all engines
 * 
 * @return vector<Engine *> vector of engines
 */
vector<Engine *> RocketBooster::getEngines() {
    return engines;
}
/**
 * @brief turns on all the engines in the booster
 * 
 */
void RocketBooster::turnOn() {
    cout << "\nTurning all Booster engines" << endl;
    for (auto &engine : engines)
        engine->turnOn();
}

/**
 * @brief turns off all the engines in the booster
 * 
 */
void RocketBooster::turnOff() {
    cout << "Turning all booster engines" << endl;
    for (auto &engine : engines)
        engine->turnOff();
}


/**
 * @brief set ready state function
 * 
 * @param e 
 */
void RocketBooster::setReadyState(EngineOptimisation* e)
{
}

/**
 * @brief notify function
 * 
 */
void RocketBooster::notify()
{
    
}


/**
 * @brief Destroy the Rocket Booster:: Rocket Booster object
 * 
 */
RocketBooster::~RocketBooster() = default;
