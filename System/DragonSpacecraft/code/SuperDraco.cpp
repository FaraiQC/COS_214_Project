#include "SuperDraco.h"
#include <iostream>

using namespace std;

//@brief Constructor creates a SuperDraco with a power of 90 that is switched off
SuperDraco::SuperDraco() 
{
	turnOff();
	this->setPower(90);
	SetDracoisCreatedChecker(1);
}

//@brief Creates a SuperDraco with a specific ID that has a power of 90 and is switched off
//@param id is the id of the newly created SuperDraco
SuperDraco::SuperDraco(string id) 
{
	this->setPower(90);
	SetDracoisCreatedChecker(1);
	this->setId(id);
	turnOff();
}

//@brief Switches on the SuperDraco
void SuperDraco::fireUp() 
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

//@brief Switches off the SuperDraco
void SuperDraco::shutDown() 
{
	this->turnOff();
	cout<<getId()<<" has been shut down"<<endl;
}

