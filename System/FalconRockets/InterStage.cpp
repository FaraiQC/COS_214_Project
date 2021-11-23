#include "InterStage.h"
#include "thread"
#include "chrono"

/**
 * @brief Construct a new Inter Stage:: Inter Stage object
 * 
 * @param name is the id of the inter stage
 * @param numberOfFins the number of interstage grid fins which are used for landing stage one
 * 
 * @author Malope Elphus (u20451696)
 */
InterStage::InterStage(string name, int numberOfFins) : Stage(name) {
    numberOfGridFins = numberOfFins;
}

/**
 * @brief setter for grid fins
 * 
 * @author Malope Elphus (u20451696)
 * 
 */
void InterStage::setGridFins(int) {
    numberOfGridFins = 4;
}

/**
 * @brief handles the separation of stage one and stage two
 * 
 * @author Malope Elphus (u20451696)
 * 
 */
void InterStage::separate() {
    std::cout
        << "\n\t\tSTAGE SEPARATION\n";
    
    this_thread::sleep_for(chrono::seconds(1));
    std::cout
        << "\t\t\t+>Separating\n";

    this_thread::sleep_for(chrono::seconds(5));
    
    std::cout
        << "\t\t\tStage One has been detached and heading back to earth for land sequence\n"
        << std::endl;
}

/**
 * @brief calls the separation function
 * 
 * @author Malope Elphus (u20451696)
 * 
 */
void InterStage::activate() {
    separate();
}

/**
 * @brief Destroy the Inter Stage:: Inter Stage object
 * 
 * @author Malope Elphus (u20451696)
 * 
 */
InterStage::~InterStage() = default;
