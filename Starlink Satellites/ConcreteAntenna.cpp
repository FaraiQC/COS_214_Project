#include "ConcreteAntenna.h"

void ConcreteAntenna::update() 
{
  radioSignal = subject->getSignal();
}

ConcreteAntenna::ConcreteAntenna() 
{

}

ConcreteAntenna::~ConcreteAntenna() 
{
  cout << "All Radio Signals are initially False" << endl;
  radioSignal = False;
}
