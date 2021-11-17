#include "ConcreteAntenna.h"

//@brief Sets radio Signal to equal the subjects signal
void ConcreteAntenna::update() 
{
  radioSignal = subject->getSignal();
}

//@brief Sets radio Signal to false
ConcreteAntenna::ConcreteAntenna() 
{
  cout << "All Antenna's Radio Signals are initially False" << endl;
  radioSignal = false;
}

ConcreteAntenna::~ConcreteAntenna() 
{
 
}
