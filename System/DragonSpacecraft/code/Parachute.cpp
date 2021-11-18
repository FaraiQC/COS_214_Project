#include "Parachute.h"

//@brief Constructor
Parachute::Parachute() 
{

}

//@brief Sets the id of the Parachute
//@param id is the id of the Parachute
Parachute::Parachute(string id)
{
	setId(id);
}

//@brief Sets the stopping power of the Parachuite
//@param stoppingPower is the stopping Power of the parachute
void Parachute::setStoppingPower(int stoppingPower) 
{
	this->stoppingPower = stoppingPower;
}

//@brief gets the stopping power of the parachute
//@return returns the stopping power of the parachute
int Parachute::getStoppingPower() 
{
	return this->stoppingPower;
}

//@brief sets the id of the Parachute
//@param id is the id of the parachute
void Parachute::setId(string id)
{
	this->id = id;
}

//@brief gets the id of the parachute
//@return returns the id of the parachute
string Parachute::getId()
{
	return this->id;
}

//@brief Confirms that Mark2 Parachute was created
//@param check is 0 when there was no parachute created, and 1 when there was a parachute created
void Parachute::SetMark2isCreatedChecker(int chech){this->check=check;}

//@brief Checks if there was a parachute created
//@return returns 0 when there was no Parachute created
//@return returns 1 when there was a Parachute created
int Parachute::GetMark2isCreatedChecker(){return check;}
