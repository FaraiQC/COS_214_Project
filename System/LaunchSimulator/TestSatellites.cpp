#include "TestSatellites.h"
#include <iostream>
#include <string>

using namespace std;

TestSatellites::TestSatellites() {
	
	cout<<"      ---------------------------------------   \n ";
	cout<<"      Starlink satellite's functionality test \n";
	cout<<"      ---------------------------------------   \n ";
}

vector<satellitesMaker*> TestSatellites:: testSatellites()
{
	satellitesMaker newCluster = satellitesMaker();
	double frequency ;
	char oneOrTwo;
	string error;
	bool failedToCollectCluster= false;

	//optimum is inbetween 10.7 - 12.7
	cout<<"Enter the frequency of each satellite(GHz): ";
	cin<<frequency;

	cout<<"Checking if cluster consists of 60 satellites...\n";

	for(int i=0; i<60; i++)
	{
		if(newCluster->getfirst() == NULL)
		{
			error = "**Error 1** failed to collect next full cluster \n";
			failedToCollectCluster = true;
		}
	}

	cout<<"Testing if all Satellites in the cluster have lasers ...\n";

	cout<<"Testing if radio signals will be able to communicate... \n";

	cout<<"Full Satellite's functionality test in progress...\n";

	cout<<"Starlink Satellites test done.\n";

	cout<<"---------------------------------------------------------------------\n";


	while((frequency<10.7)|| (frequency >12.7) || oneOrTwo == '1' )
	{
		error += "**Error 2** frequency used is NOT optimum (range should be: 10.7-12.7)\n";
		cout<< error<<"\n";

		cout<<"Attempting to collect a new cluster of Satellites...\n";
		cout<<"Attempt was a success!\n";

		cout<<"Tweak frequency value/Close application(1/2): ";
		cin<<oneOrTwo;

		if(oneOrTwo == '1')
		{
			cout<<"Re-enter the frequency of radio signals used(GHz): ";
			cin<<frequency;
		}
		else
		{
			exit(0);
		}

	} 

	cout<<"Satellite's Cluster test PASSED. "
	
	satsMaker.push_back(newCluster);
	return  satsMaker;


}

TestSatellites::~TestSatellites() {

}

void TestSatellites::BeforeLaunch() {
	satellitesMaker* sat = new satellitesMaker();

	sat->satellitesBeforeLaunch();
}

void TestSatellites::InDesiredOrbit() {

	satellitesMaker* sat = new satellitesMaker();
    Satellite* s =  new Satellite();
    SatelliteMediator* sM = new concreteMediator();
    Antenna* a = new ConcreteAntenna();

	cout<<"Starlink Satelites have been released in the desired orbit!\n";

//Once in desired orbit
	cout<<"Notifying Antennas!\n";
    s->notifyAntenna();
	cout<<"3 new Antennas have started communicating with the Satellites.\n";
	cout<<"2 new Antennas have started communicating with the Satellites.\n";
    sM->notify(); // Allowing communication for Satellites to spread equally.
	cout<<"More and more Antenna requests to communicate with the Satellites are coming through.\n";
	
}


void TestSatellites :: SatellitesAuntentication()
{
	//A satellite moves from original position
    cout<<"Satellite Hit! Laser for this satellite is On\n";
    s->satellitesMoved();

//1 Antenna's radio signal went off
    cout<<"Antenna's radio signals turned off, Notifying System!\n";
    a->update();

	cout<<"All Satellites are in place and are functioning well!\n";
}