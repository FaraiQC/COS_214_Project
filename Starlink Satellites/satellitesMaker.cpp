#include "satellitesMaker.h"

satellitesMaker::satellitesMaker() {
	
}

void satellitesMaker::CollectNextCluster() {
	//var
	Satellite* p = new Satellite() ;
	
	if(isEmpty() == true)
	{
		cout<<"There are no StarLink Satellites to collect."<<endl;
	}
	
	//make 1 Satellite
	this->first = p;
	first->prevS = null;
	
	//prototype 59 Satellites using prototype and iterator 
	Satellite* cur = first;
	Satellite* prev = null;
	
	for (int n=1;n<60;n++)
	{
		curr->nextS = p->clone();
	
	}
	
	cout<<"60 Satellites have been collected by the Falcon 9 Rocket."<<endl;
	this->empty = true;
}

void satellitesMaker::isEmpty() {
	return this->empty;
}
