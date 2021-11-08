#include "satellitesMaker.h"

satellitesMaker::satellitesMaker() {
	
}

void satellitesMaker::CollectNextCluster() {
	if(isEmpty() == true)
	{
		cout<<"There are no StarLink Satellites to collect."<<endl;
	}
	
	cout<<"60 Satellites have been collected by the Falcon 9 Rocket."<<endl;
	this->empty = true;
}

void satellitesMaker::isEmpty() {
	return this->empty;
}
