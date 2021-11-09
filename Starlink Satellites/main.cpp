#include "Antenna.h"
#include "ConcreteAntenna.h"
#include "ConcreteMediator.h"
#include "ConcreteSatellite.h"
#include "Satellite.h"
#include "SatelliteMediator.h"
#include "SatellitesMaker.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    SatellitesMaker* sat = new SatellitesMaker();
    Satellite* s =  new Satellite();
    SatelliteMediator* sM = new SatelliteMediator();

    cout<<"Satellites waiting to be collected.\n";
    sat->CollectNextCluster();

    cout<<"Starlink Satelites have been launched!\n";
    cout<<"Starlink Satelites have been released in the desired orbit!\n";
    
    s->notifyAntenna();
    sM->notify(); // Allowing communication for Satellites to spread equally.




    return 0;
}