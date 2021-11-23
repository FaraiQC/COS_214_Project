#include "Parachute.h"


/**
 * @brief Construct a new Parachute:: Parachute object
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
Parachute::Parachute() {
	check=0;
}


/**
 * @brief Construct a new Parachute:: Parachute object
 * 		  & set ID
 * 
 * @param id :-the id of the Parachute
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
Parachute::Parachute(string id){
	setId(id);
}


/**
 * @brief Sets the stopping power of the Parachuite
 * 
 * @param stoppingPower :-the stopping Power of the parachute
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Parachute::setStoppingPower(int stoppingPower) {
	this->stoppingPower = stoppingPower;
}


/**
 * @brief Gets the stopping power of the parachute
 * 
 * @return int :-stoppingPower
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
int Parachute::getStoppingPower() {
	return this->stoppingPower;
}


/**
 * @brief Sets the id of the Parachute
 * 
 * @param id :-the id of the parachute
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Parachute::setId(string id){
	this->id = id;
}


/**
 * @brief Gets the id of the parachute
 * 
 * @return string :-the id of the parachute
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
string Parachute::getId(){
	return this->id;
}

/**
 * @brief Confirms that Mark2 Parachute was created
 * 
 * @param check :- if(==0) NO PARACHUTE, else OTHERWISE
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void Parachute::SetMark2isCreatedChecker(int check){
	this->check=check;
}


/**
 * @brief Checks if there was a Mark2parachute created
 * 
 * @return int :-check
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
int Parachute::GetMark2isCreatedChecker(){
	return check;
}

/**
 * @brief FINAL EDIT CREDS
 * 
 * @author Malope Elphus (u20451696)
 * 
 */