#include "ConcreteAntenna.h"


//@brief Sets radio Signal to equal the subjects signal
void ConcreteAntenna::update() 
{
  radioSignal = subject->getSignal();
}

//@brief Sets radio Signal to false
ConcreteAntenna::ConcreteAntenna() : Antenna()
{
  radioSignal = false;
}


//@brief Sets radio Signal to false
ConcreteAntenna::~ConcreteAntenna() 
{
  radioSignal = false;
}
