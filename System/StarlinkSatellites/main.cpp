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
    Antenna* a = new ConcreteAntenna();

//BEFORE LAUNCH
    cout<<"Satellites waiting to be collected.\n";
    sat->CollectNextCluster();

    cout<<"Starlink Satelites have been launched!\n";
    cout<<"Starlink Satelites have been released in the desired orbit!\n";

//Once in desired orbit
    s->notifyAntenna();
    sM->notify(); // Allowing communication for Satellites to spread equally.

//A satellite moves from original position
    cout<<"Satellite Hit! Laser for this satellite is On\n";
    s->satellitesMoved();

//1 Antenna's radio signal went off
    cout<<"Antenna's radio signals turned off, Notifying System!\n";
    a->update();


    return 0;
}
