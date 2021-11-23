#include "RocketBooster.h"

/**
 * @brief Construct a new Rocket Booster:: Rocket Booster object
 * 
 * @param id is the booseter name/id
 * @param NumberOfEngines the number of engines to add to the booster
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
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
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
void RocketBooster::add(Engine *engine) {
    engines.push_back(engine);
}

/**
 * @brief removes engine to the list of engines
 * 
 * @param engine engine pointer
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
void RocketBooster::remove(Engine *engine) {
    // TODO: Remove specified engine from the collection.
}

/**
 * @brief getter for all engines
 * 
 * @return vector<Engine *> vector of engines
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
vector<Engine *> RocketBooster::getEngines() {
    return engines;
}
/**
 * @brief turns on all the engines in the booster
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
void RocketBooster::turnOn() {
    std::cout
        << "\n\t\tBOOSTERS\n";
    for (auto &engine : engines)
        engine->turnOn();

    std::cout
        << "\t\t\tON\n"
        << std::endl;
}

/**
 * @brief turns off all the engines in the booster
 * 
 * @author Malope Elphus (u20451696)
 * 
 */
void RocketBooster::turnOff() {
    std::cout
        << "\n\t\tBOOSTERS\n";
    for (auto &engine : engines)
        engine->turnOff();

    std::cout
        << "\t\t\tOFF\n"
        << std::endl;
}


/**
 * @brief set ready state function
 * 
 * @param e 
 * 
 * @author Musa Mabasa (u18265163)
 */
void RocketBooster::setReadyState(EngineOptimisation* e)
{
}

/**
 * @brief notify function
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
void RocketBooster::notify()
{
    
}


/**
 * @brief Destroy the Rocket Booster:: Rocket Booster object
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
RocketBooster::~RocketBooster() = default;
