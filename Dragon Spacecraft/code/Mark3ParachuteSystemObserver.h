#ifndef MARK3PARACHUTESYSTEMOBSERVER_H
#define MARK3PARACHUTESYSTEMOBSERVER_H
#include "ParachuteSystemObserver.h"
#include "Spacecraft.h"
#include "Parachute.h"

class Mark3ParachuteSystemObserver :public  ParachuteSystemObserver {

private:
	int observerCurrentHight;
	Spacecraft * Dragon_Or_Crew_subj;
	Parachute* theParachute;

public:
	Mark3ParachuteSystemObserver(Spacecraft * Dragon_Or_Crew_subj);
	void update();
	void print();

};

#endif
