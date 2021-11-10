#include "concreteMediator.h"
#include <iostream>
#include <string>

using namespace std;

void concreteMediator::notify() 
{
    /*
    Satellite* curr = satelliteList->nextSatellite();
    while(curr != NULL)
    {
        curr->setDistance();
        curr = satelliteList->nextSatellite();
    }*/
    
    cout<<"Configuration done! All Satellites are spread equally.\n";
    cout<<"Satellite's lasers have been turned Off.\n";

}
