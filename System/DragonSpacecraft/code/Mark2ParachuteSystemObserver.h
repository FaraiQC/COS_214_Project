#ifndef MARK2PARACHUTESYSTEMOBSERVER_H
#define MARK2PARACHUTESYSTEMOBSERVER_H
#include "Spacecraft.h"
#include "Parachute.h"
#include "Mark2Parachute.h"

class Mark2ParachuteSystemObserver :public ParachuteSystemObserver {
	private:
		int observerCurrentHight;
		Parachute* theParachute;
		Spacecraft * Dragon_Or_Crew_subj;
    
	public:
		Mark2ParachuteSystemObserver(Spacecraft * Dragon_Or_Crew_subj);
		void update();
		void print();
};
#endif
