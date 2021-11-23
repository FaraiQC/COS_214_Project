#include "CrewMember.h"
#include <string>

using namespace std;

/**
 * @brief Construct a new Crew Member:: Crew Member object
 * 
 */
CrewMember::CrewMember() {
	
}

/**
 * @brief Construct a new Crew Member:: Crew Member object
 * 
 * @param name 
 * @param weight 
 */
CrewMember::CrewMember(string name, double weight) {
	setName(name);
	setWeight(weight);
}

/**
 * @brief setter for the name
 * 
 * @param name 
 */
void CrewMember::setName(string name) {
	this->name=name;	
}

/**
 * @brief setter for weight
 * 
 * @param weight 
 */
void CrewMember::setWeight(double weight) {
	this->weight=weight;
}

/**
 * @brief getter for the name
 * 
 * @return string 
 */
string CrewMember::getName() {
	return name;
}

/**
 * @brief getter for weight
 * 
 * @return double 
 */
double CrewMember::getWeight() {
	return this->weight;
}

