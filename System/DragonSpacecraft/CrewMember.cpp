#include "CrewMember.h"
#include <string>

using namespace std;

//@brief Constructor
CrewMember::CrewMember() {
	
}

//@brief Sets the name and the weight of the crew member
//@param name is the name of the crew member
//@param weight is the weight of the crew member
CrewMember::CrewMember(string name, double weight) {
	setName(name);
	setWeight(weight);
}

//@brief Sets the name of the crew member
//@param name is the name of the crew member
void CrewMember::setName(string name) {
	this->name=name;	
}

//@brief Sets the weight of the crew member
//@param weight is the weight of the crew member
void CrewMember::setWeight(double weight) {
	this->weight=weight;
}

//@brief gets the name of the crew member
//@return returns the name of the crew member
string CrewMember::getName() {
	return name;
}

//@brief gets the weight of the crew member
//@return returns the weight of the crew member
double CrewMember::getWeight() {
	return this->weight;
}
