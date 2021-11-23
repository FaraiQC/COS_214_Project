#include "ConcreteAntenna.h"


/**
 * @brief updates the radioSignal
 * 
 */
void ConcreteAntenna::update() 
{
  radioSignal = subject->getSignal();
}

/**
 * @brief Construct a new Concrete Antenna:: Concrete Antenna object
 * 
 */
ConcreteAntenna::ConcreteAntenna() : Antenna()
{
  radioSignal = false;
}


/**
 * @brief Destroy the Concrete Antenna:: Concrete Antenna object
 * 
 */
ConcreteAntenna::~ConcreteAntenna() 
{
  radioSignal = false;
}
