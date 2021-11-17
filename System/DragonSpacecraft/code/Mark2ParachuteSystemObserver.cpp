#include "Mark2ParachuteSystemObserver.h"
#include <iostream>

using namespace std;

Mark2ParachuteSystemObserver::Mark2ParachuteSystemObserver(Spacecraft * Dragon_Or_Crew_subj)
{
	this->Dragon_Or_Crew_subj=Dragon_Or_Crew_subj;
	observerCurrentHight=0;
	theParachute=new Mark2Parachute();
}
void Mark2ParachuteSystemObserver::update() {
	if(Dragon_Or_Crew_subj !=NULL)
	{	
		if(Dragon_Or_Crew_subj->getCurrtHight()==6)//6 km
		{
			observerCurrentHight=6;
		}
		else
		{
			observerCurrentHight=Dragon_Or_Crew_subj->getCurrtHight();
		}
	}	
}

void Mark2ParachuteSystemObserver::print()
{
	if(observerCurrentHight==6)// 6 km
	{
		theParachute->deploy();
		//part of Unit Testing
		// if(theParachute->calculateSuccessRate()>=5)
		// {	cout<<"Landed successfully"<<endl;
		// 	cout<<"The successful parachute tests bring’s the Crew/Cargo Dragon  one step closer to safely launching and landing astronauts."<<endl;
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
