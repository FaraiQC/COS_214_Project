#include "Antenna.h"
#include "ConcreteAntenna.h"
#include "concreteMediator.h"
#include "concreteSatellite.h"
#include "Satellite.h"
#include "SatelliteMediator.h"
#include "satellitesMaker.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    satellitesMaker* sat = new satellitesMaker();
    Satellite* s =  new Satellite();
    SatelliteMediator* sM = new concreteMediator();

    cout<<"Satellites waiting to be collected.\n";
    sat->CollectNextCluster();

    cout<<"Starlink Satelites have been launched!\n";
    cout<<"Starlink Satelites have been released in the desired orbit!\n";
    
    s->notifyAntenna();
    sM->notify(); // Allowing communication for Satellites to spread equally.




    return 0;
}