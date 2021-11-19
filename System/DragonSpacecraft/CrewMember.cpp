#include "CrewMember.h"
#include <string>

using namespace std;

CrewMember::CrewMember() {
	
}

CrewMember::CrewMember(string name, double weight) {
	setName(name);
	setWeight(weight);
}

void CrewMember::setName(string name) {
	this->name=name;	
}

void CrewMember::setWeight(double weight) {
	this->weight=weight;
}

string CrewMember::getName() {
	return name;
}

double CrewMember::getWeight() {
	return this->weight;
}

