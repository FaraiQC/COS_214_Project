#include "concreteMediator.h"
#include <iostream>
#include <string>

using namespace std;

void concreteMediator::notify() 
{
    cout<<"Configuration done! All Satellites are spread equally.\n";
    cout<<"Satellite's lasers have been turned Off.\n";

}
