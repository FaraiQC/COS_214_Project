#include "Parachute.h"

Parachute::Parachute() {

}

Parachute::Parachute(string id){
	setId(id);
}

void Parachute::setStoppingPower(int stoppingPower) {
	this->stoppingPower = stoppingPower;
}

int Parachute::getStoppingPower() {
	return this->stoppingPower;
}

void Parachute::setId(string id){
	this->id = id;
}

string Parachute::getId(){
	return this->id;
}

void Parachute::SetMark2isCreatedChecker(int chech){this->check=check;}
int Parachute::GetMark2isCreatedChecker(){return check;}