#include "Launch.h"

/**
 * @brief Construct a new Launch:: Launch object, instantiate the receiver attribute
 * 
 * @param receiver 
 */
Launch::Launch(Simulation* receiver)
{
    this->receiver=receiver;
}

/**
 * @brief Destroy the Launch:: Launch object
 * 
 */
Launch::~Launch()
{
    
}

/**
 * @brief execute the receiver's launch
 * 
 */
void Launch::execute()
{
    receiver->Launch();
}