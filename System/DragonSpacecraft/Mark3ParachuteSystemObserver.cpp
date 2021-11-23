#include "Mark3ParachuteSystemObserver.h"
#include <iostream>

using namespace std;


/**
 * @brief Construct a new Mark 3 Parachute System Observer:: Mark 3 Parachute System Observer object
 * 
 * @param Dragon_Or_Crew_subj 
 */
Mark3ParachuteSystemObserver::Mark3ParachuteSystemObserver(Spacecraft * Dragon_Or_Crew_subj)
{
	this->Dragon_Or_Crew_subj=Dragon_Or_Crew_subj;
	observerCurrentHight=0;
	theParachute= new Mark3Parachute();
}


/**
 * @brief updates the current height of the spacecraft
 * 
 */
void Mark3ParachuteSystemObserver::update() {
	if(Dragon_Or_Crew_subj !=NULL)
	{
		observerCurrentHight=Dragon_Or_Crew_subj->getCurrentHeight();
	}	
}


/**
 * @brief check for height of spacecraft and deploys when less or equal to 6KM
 * 
 */
void Mark3ParachuteSystemObserver::print()
{
	if(observerCurrentHight<=6)// 6 km
	{
		theParachute->deploy();
	}
	else
	{
		cout<<"NOT IN  OPTIMUM HIGHT TO DEPLOY PARACHUTE"<<endl;
	}
}
