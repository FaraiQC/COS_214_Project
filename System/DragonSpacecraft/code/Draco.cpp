#include "Draco.h"
#include <iostream>

using namespace std;

//@brief Constructor initialises a Draco switched off with a power of 80, but is not cereated 
Draco::Draco() 
{
	turnOff();
	this->setPower(80);
	SetDracoisCreatedChecker(0);
}

//@brief Constructor initialises a Draco switched off with a power of 80 and an id, but is not created
//@param id is the ID of the Draco
Draco::Draco(string id) 
{
	SetDracoisCreatedChecker(0);
	this->setPower(80);
	this->setId(id);
	turnOff();
}

//@brief Switches on the Draco
void Draco::fireUp() 
{
	if(isOn() == true)
	{
		cout<<getId()<<" turned on, firing up!"<<endl;
	}
	else
	{
		cout<<getId()<<" is not turned on yet, please turn it on"<<endl;
	}	
}

//@brief Shuts down the Draco
void Draco::shutDown() 
{
	this->turnOff();
	cout<<getId()<<" has been shut down"<<endl;
}
