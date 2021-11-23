#include "Mark2ParachuteSystemObserver.h"
#include <iostream>

using namespace std;

/**
 * @brief Construct a new Mark 2 Parachute System Observer:: Mark 2 Parachute System Observer object
 * 
 * @param Dragon_Or_Crew_subj 
 */
Mark2ParachuteSystemObserver::Mark2ParachuteSystemObserver(Spacecraft * Dragon_Or_Crew_subj)
{
	this->Dragon_Or_Crew_subj=Dragon_Or_Crew_subj;
	observerCurrentHight=0;
	theParachute=new Mark2Parachute();
}


/**
 * @brief updates the current height of the spacecraft
 * 
 */
void Mark2ParachuteSystemObserver::update() {
	if(Dragon_Or_Crew_subj !=NULL)
	{	
		observerCurrentHight=Dragon_Or_Crew_subj->getCurrentHeight();
	}	
}


/**
 * @brief check for height of spacecraft and deploys when less or equal to 6 kilometres
 * 
 */
void Mark2ParachuteSystemObserver::print()
{
	if(observerCurrentHight<=6)
	{	
		theParachute->deploy();
	}
	else
	{
		cout<<observerCurrentHight<<endl;
	}
}
