#include "concreteMediator.h"
#include <iostream>
#include <string>

using namespace std;

//@brief Spreads the satellites evenly then switches off all of their lasers
void concreteMediator::notify() 
{
    cout<<"Configuration done! All Satellites are spread equally.\n";
    cout<<"Satellite's lasers have been turned Off.\n";
}


//@brief constructor
concreteMediator :: concreteMediator() : SatelliteMediator()
{

}

//@brief Destructor
concreteMediator :: ~concreteMediator()
{
    
}
