#include "satellitesMaker.h"
#include <iostream>

using namespace std;

//@brief Sets the first pointer (the head of the list of Satellites) to null
satellitesMaker::satellitesMaker() 
{
	// this->first = new Satellite();
	first = NULL;
}

//@brief Collects the next cluster of 60 satellites by making one Satellite and cloning 59 of them. The 60 satellites are stored in a linked list with the pointer 'first' as the head of the list
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

//@brief Checks if there was a cluster colected or not
//@return true if there was no cluster collected
//@return false if there was a cluster collected
bool satellitesMaker::isEmpty() 
{
	if(first == NULL)
	{
		return true;
	}
	return false;
}
