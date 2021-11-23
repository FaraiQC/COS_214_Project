#include "satellitesMaker.h"
#include <iostream>

using namespace std;


/**
 * @brief Construct a new satellites Maker::satellites Maker object
 * 
 */
satellitesMaker::satellitesMaker() 
{
	// this->first = new Satellite();
	first = NULL;
	
}

/**
 * @brief Collects Next satellites
 * 
 */
void satellitesMaker::CollectNextCluster() 
{
	//var
	Satellite* p = new Satellite() ;
	Satellite* curr = first;
	Satellite* prev = NULL;
	
	//make 1 Satellite
	this->first = p;
	setFist(p);
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
	
	this->empty = true;
}

/**
 * @brief Checks if it's empty
 * 
 * @return true 
 * @return false 
 */
bool satellitesMaker::isEmpty() 
{
	if(first == NULL)
	{
		return true;
	}
	return false;
}

/**
 * @brief Returns a cluster
 * 
 * @return Satellite* 
 */
Satellite* satellitesMaker :: testCluster()
{
	CollectNextCluster();
	return first;
}

void satellitesMaker :: satellitesBeforeLaunch()
{
	CollectNextCluster();
	if(isEmpty() == false)
	{
		cout<<"Satellite cluster is ready to be launched.\n";
	}
}

Satellite* satellitesMaker :: getFirst()
{
	// CollectNextCluster();
	return first;
}

void satellitesMaker :: setFist(Satellite* s)
{
	this->first = s;
}

