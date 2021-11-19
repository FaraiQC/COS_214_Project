#include "Mark3ParachuteSystemObserver.h"
#include <iostream>

using namespace std;

Mark3ParachuteSystemObserver::Mark3ParachuteSystemObserver(Spacecraft * Dragon_Or_Crew_subj)
{
	this->Dragon_Or_Crew_subj=Dragon_Or_Crew_subj;
	observerCurrentHight=0;
	theParachute= new Mark3Parachute();
}

void Mark3ParachuteSystemObserver::update() {
	if(Dragon_Or_Crew_subj !=NULL)
	{
		observerCurrentHight=Dragon_Or_Crew_subj->getCurrentHeight();
	}	
}

void Mark3ParachuteSystemObserver::print()
{
	if(observerCurrentHight<=6)// 6 km
	{
		theParachute->deploy();

		// if(theParachute->calculateSuccessRate()>=5)
		// {	cout<<"Landed successfully"<<endl;
		// 	cout<<"The successful parachute tests bring's the Crew/Cargo Dragon  one step closer to safely launching and landing astronauts."<<endl;
		// }
		// else
		// {
		// 	cout<<"Failed to Land!"<<endl;
		// }
	}
	else
	{
		cout<<"NOT IN  OPTIMUM HIGHT TO DEPLOY PARACHUTE"<<endl;
	}
}
