#include "CrewMember.h"
#include <string>

using namespace std;



/**
 * @brief Construct a new Crew Member:: Crew Member object
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
CrewMember::CrewMember() {
	
}



/**
 * @brief Construct a new Crew Member:: Crew Member object
 *  	  Sets the name and the weight of the crew member
 * 
 * @param name :-the name of the crew member
 * @param weight :-the weight of the crew member
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
CrewMember::CrewMember(string name, double weight) {
	setName(name);
	setWeight(weight);
}


/**
 * @brief Sets the name of the crew member
 * 
 * @param name :-the name of the crew member
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void CrewMember::setName(string name){
	this->name=name;	
}


/**
 * @brief Sets the weight of the crew member
 * 
 * @param weight :-the weight of the crew member
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void CrewMember::setWeight(double weight){
	this->weight=weight;
}


/**
 * @brief Gets the name of the crew member
 * 
 * @return string :-name
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
string CrewMember::getName(){
	return name;
}

/**
 * @brief Gets the weight of the crew member
 * 
 * @return double :-weight
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
double CrewMember::getWeight(){
	return this->weight;
}


/**
 * @brief FINAL EDIT CREDIT
 * 
 * @author Malope Elphus (u20451696)
 * 
 */