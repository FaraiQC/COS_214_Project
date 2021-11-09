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

    cout<<"Satellites waiting to be collected.\n";
    sat->CollectNextCluster();

    cout<<"Starlink Satelites have been launched!\n";
    cout<<"Starlink Satelites have been released in the desired orbit!\n";
    
    s->notifyAntenna();
    




    return 0;
}