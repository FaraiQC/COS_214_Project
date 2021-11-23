#include "Parachute.h"

/**
 * @brief Construct a new Parachute:: Parachute object
 * 
 */
Parachute::Parachute() {
	check=0;
}


/**
 * @brief Construct a new Parachute:: Parachute object
 * 
 * @param id 
 */
Parachute::Parachute(string id){
	setId(id);
}


/**
 * @brief Sets the stopping power of the Parachuite
 * 
 * @param stoppingPower 
 */
void Parachute::setStoppingPower(int stoppingPower) {
	this->stoppingPower = stoppingPower;
}


/**
 * @brief gets the stopping power of the parachute
 * 
 * @return int 
 */
int Parachute::getStoppingPower() {
	return this->stoppingPower;
}


/**
 * @brief sets the id of the Parachute
 * 
 * @param id 
 */
void Parachute::setId(string id){
	this->id = id;
}


/**
 * @brief gets the id of the parachute
 * 
 * @return string 
 */
string Parachute::getId(){
	return this->id;
}


/**
 * @brief Confirms that Mark2 Parachute was created
 * 
 * @param check 
 */
void Parachute::SetMark2isCreatedChecker(int check){
	this->check=check;
}


/**
 * @brief Checks if there was a Mark2parachute created
 * 
 * @return int 
 */
int Parachute::GetMark2isCreatedChecker(){
	return check;
}