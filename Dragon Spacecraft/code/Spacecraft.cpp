#include "Spacecraft.h"
#include <iostream>

using namespace std;

 Spacecraft::Spacecraft() {
	cout<<"The spacecraft has been created"<<endl;
}

// double Spacecraft::currentWeight() {		//pure virtual
// 	double weight=0;
// 	for(Cargo* item: cargoList){
// 		weight += item->getWeight();
// 	}
// 	for(CrewMember* item: spacecraftCrew){
// 		weight += item->getWeight();
// 	}
// 	return weight;
// }

void Spacecraft::setCurrentLocation(string location) {
	this->currentLocation = location;
}

string Spacecraft::getCurrentLocation() {
	return this->currentLocation;
}

void Spacecraft::setDestination(int destination) {
	this->destination = destination;
}

double Spacecraft::getWeightToOrbit() {
	return maxWeightToEarth;
}

void Spacecraft::setWeightToOrbit(double weight) {
	this->maxWeightToOrbit=weight;
}

double Spacecraft::getWeightToEarth() {
	return this->maxWeightToEarth;
}

void Spacecraft::goToDestination() {
	cout<<"The spacecraft leaves"<<this->currentLocation<<" to "<<this->destination<<endl;
}

void Spacecraft::notify() {
	for(int i=0;i<observerList.size();i++)
	{
		if(observerList[i] !=NULL)
			observerList[i]->update();
	}
}

void Spacecraft::attach(ParachuteSystemObserver* obj) {
	observerList.push_back(obj);
}

void Spacecraft::detach(ParachuteSystemObserver* obj) {
	for(int i=0;i<observerList.size();i++)
	{
		if(observerList[i] !=NULL)
		{
			if(observerList[i]==obj)
			{
				observerList[i]=NULL;
			}
		}
	}
}

void Spacecraft::missionComplete() {
	cout<<"The spacecraft has reached earth, successfully."<<endl;
	reused++;
}

void Spacecraft::attach(Thruster* thruster) {
	this->thrustersList.push_back(thruster);
}

void Spacecraft::detach(Thruster* thruster) {
	remove(thrustersList.begin(), thrustersList.end(), thruster);
}

