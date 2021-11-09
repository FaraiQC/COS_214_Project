#include "ConcreteAntenna.h"

void ConcreteAntenna::update() 
{
  radioSignal = subject->getSignal();
}

ConcreteAntenna::ConcreteAntenna() 
{
   cout << "All Antenna's Radio Signals are initially False" << endl;
  radioSignal = false;
}

ConcreteAntenna::~ConcreteAntenna() 
{
 
}
