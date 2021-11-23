#include "satellitesMaker.h"
#include <iostream>

using namespace std;


/**
 * @brief Construct a new satellites Maker::satellites Maker object
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 * 
 */
satellitesMaker::satellitesMaker() {
	// this->first = new Satellite();
	first = NULL;
}

/**
 * @brief Collects a clucster of satellites and saves them
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 * 
 */
void satellitesMaker::CollectNextCluster() {
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
	for (int n=0;n<60;n++){
		curr->nextS = p->Clone();
 
		prev = curr;
		curr = curr->nextS;

		curr->prevS= prev;
	}
	
	this->empty = true;
}

/**
 * @brief Checks if a cluster exists or not
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 * 
 * @return true :- if(it does not exit)
 * @return false :- if(it does)
 */
bool satellitesMaker::isEmpty(){
	if(first == NULL)
	{
		return true;
	}
	return false;
}

/**
 * @brief Returns a cluster of satellites
 * 
 * @return Satellite* :-first satellite that points to the other and creates a chain
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 */
Satellite* satellitesMaker::testCluster(){
	CollectNextCluster();
	return first;
}


/**
 * @brief Sets up pre_Launch parameters and conditions
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 * 
 */
void satellitesMaker :: satellitesBeforeLaunch(){
	CollectNextCluster();
	if(isEmpty() == false){
		cout<<"Satellite cluster is ready to be launched.\n";

		std:cout
			<< "\n\t\tCLUSTER IS READY FOR LAUNCH\n"
			<< std::endl;
	}
}


/**
 * @brief Get the First object
 * 
 * @return Satellite* :-cluster
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 */
Satellite* satellitesMaker::getFirst(){
	// CollectNextCluster();
	return first;
}


/**
 * @brief Collects a cluster and stores it.
 * 
 * @param s :-cluster collected
 */
void satellitesMaker::setFist(Satellite* s){
	this->first = s;
}

/**
 * @brief FINAL EDIT CREDS
 * 
 * @author Malope Elphus (u20541696)
 */