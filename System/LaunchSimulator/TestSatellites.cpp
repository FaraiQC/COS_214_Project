#include "TestSatellites.h"
#include <iostream>
#include <string>
#include "concreteMediator.h"
#include "ConcreteAntenna.h"
#include "Antenna.h"
#include "unistd.h"
#include "SatelliteMediator.h"
#include <time.h>  

using namespace std;


TestSatellites::TestSatellites() {
	
}

vector<satellitesMaker*> TestSatellites:: testSatellites()
{

	cout<<"      ---------------------------------------   \n";
	cout<<"      Starlink satellite's functionality test \n";
	cout<<"      ---------------------------------------   \n\n";
	satellitesMaker* newCluster = new satellitesMaker();
	double frequency ;
	char oneOrTwo;
	string error;
	bool failedToCollectCluster= false;

	//optimum is inbetween 10.7 - 12.7
	cout<<"Enter the frequency of each satellite(GHz): ";
	cin>>frequency;

	cout<<"\nChecking if cluster consists of 60 satellites...\n";
	sleep(1);


		if(newCluster->testCluster() == NULL)
		{
			failedToCollectCluster = true;
			
			cout<<"An attempt to collect 1 cluster of satellites made."<<endl;

			sleep(1.5);
		}
		else
		{
			cout<<"60 satellites have been collected by the Falcon 9 rocket."<<endl;
			sleep(1.5);

		}

	

	cout<<"Testing if all Satellites in the collected cluster have lasers ...\n";
	sleep(1);

	cout<<"Testing if radio signals will be able to communicate... \n";
	sleep(1.5);

	cout<<"Full Satellite's functionality test in progress...\n";
	sleep(1);

	cout<<"Starlink Satellites test in progress...\n";
	sleep(3);


	cout<<"---------------------------------------------------------------------\n";

	if(failedToCollectCluster == true)
	{

		cout<<"**Error 1** Failed to collect next full cluster \n";
	}
	if((frequency<10.7)|| (frequency >12.7))
	{
		cout<<"\n**Error 2** frequency used is NOT optimum (range should be: 10.7-12.7)\n";
	}

	if(failedToCollectCluster == true)
	{
		cout<<"Re-configuring to test again.\n";
		sleep(1);
		cout<<"Attempting to collect a new cluster of Satellites...\n";
		cout<<"Attempt was a success!\n";
	}
	
	while((frequency<10.7)|| (frequency >12.7))
	{
		cout<<"Re-configuring to test again.\n\n";
		sleep(1);

		cout<<"Tweak frequency value/Close application(1/2): ";
		cin>>oneOrTwo;

		if(oneOrTwo == '1')
		{
			cout<<"Re-enter the frequency of radio signals used(GHz): ";
			cin>>frequency;
		}
		else
		{
			exit(0);
		}

	} 
	cout<<"\n";

	cout<<"Cluster of Satellites have been configured.\n"
	<< "Radio signals of the Satellites have been set to a frequency of "<<frequency <<"GHz. \n";
	cout<<"Satellite's Cluster is in OPTIMUM. \n";
	sleep(1);
	cout<<"\nStarlink satelllites can now be launched.\n";
	
	satsMaker.push_back(newCluster);
	return  satsMaker;


}

TestSatellites::~TestSatellites() {

}

void TestSatellites::BeforeLaunch() {
	satellitesMaker* sat = new satellitesMaker();

	cout<<"All Satellite's lasers are initially set to Off.\n";
	cout << "All Antenna's and Satellite's Radio Signals are initially False" << endl;

	sat->satellitesBeforeLaunch();

}

void TestSatellites::InDesiredOrbit() {

	satellitesMaker* sat = new satellitesMaker();
    Satellite* s =  new Satellite();
    SatelliteMediator* sM = new concreteMediator();
    Antenna* a = new ConcreteAntenna();
	Antenna* newAntenna ;

	srand(time(NULL));
	random = rand()%6 + 1;

	cout<<"Starlink Satelites have been released in the desired orbit!\n";

//Once in desired orbit
	cout<<"Notifying Antennas!\n";
    s->notifyAntenna();
	sM->notify(); 
	cout<<"\n";

	cout<<random<<"0000 new Antennas have attempted to connect with the Satellites.\n";
	for(int k=0; k<random; k++)
	{
		newAntenna = new ConcreteAntenna();
		s->attach(newAntenna);

	}
	total +=random;
	cout<<"Antennas connected: "<<total<<"0 000";
	cout<<"\n\n";
	// cout<<"2 new Antennas have started communicating with the Satellites.\n";
   // Allowing communication for Satellites to spread equally.
	
}


void TestSatellites :: SatellitesAuntentication()
{
	Satellite* s =  new Satellite();
	Antenna* a = new ConcreteAntenna();

	cout<<"\n";
	//A satellite moves from original position
    cout<<"Satellite Hit! Laser for this satellite is On\n";
    s->satellitesMoved();

//1 Antenna's radio signal went off
    cout<<"Antenna's radio signals turned off, Notifying System!\n";
    a->update();

	srand(time(NULL)+1);
	random1 = rand()%3 + 1;

	cout<<"\n";

	cout<<random1<<"0000 new Antennas have attempted to connect with the Satellites.\n";
	for(int k=0; k<random1; k++)
	{
		a = new ConcreteAntenna();
		s->attach(a);

	}
	total +=random1;
	cout<<"Antennas connected: "<<total<<"0 000";
	cout<<"\n\n";

	// cout<<"More and more Antenna requests to communicate with the Satellites are coming through.\n\n";

	cout<<"All Satellites are in place and are functioning well!\n";
}
