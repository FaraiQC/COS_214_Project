#include "satellitesMaker.h"
#include <iostream>

using namespace std;

satellitesMaker::satellitesMaker() 
{
	// this->first = new Satellite();
	first = NULL;
	
}

void satellitesMaker::CollectNextCluster() 
{
	//var
	Satellite* p = new Satellite() ;
	Satellite* curr = first;
	Satellite* prev = NULL;
	
	//make 1 Satellite
	this->first = p;
	first-> prevS = NULL;

	//prototype 59 Satellites using prototype and iterator 
	curr = first;
	for (int n=0;n<60;n++)
	{
		curr->nextS = p->Clone();
 
		prev = curr;
		curr = curr->nextS;

		curr->prevS= prev;

	}
	
	cout<<"60 Satellites have been collected by the Falcon 9 Rocket."<<endl;
	this->empty = true;
}

bool satellitesMaker::isEmpty() 
{
	if(first == NULL)
	{
		return true;
	}
	return false;
}
