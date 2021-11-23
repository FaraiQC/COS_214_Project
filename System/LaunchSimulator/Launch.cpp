#include "Launch.h"

/**
 * @brief Construct a new Launch:: Launch object
 * 
 * @param receiver 
 * 
 * @author Musa Mabasa (u18265163)
 */
Launch::Launch(Simulation* receiver)
{
    this->receiver=receiver;
}

/**
 * @brief Destroy the Launch:: Launch object
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
Launch::~Launch()
{
    
}

/**
 * @brief 
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
void Launch::execute()
{
    receiver->Launch();
}