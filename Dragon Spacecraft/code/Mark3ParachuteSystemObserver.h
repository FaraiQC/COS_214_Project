#ifndef MARK3PARACHUTESYSTEMOBSERVER_H
#define MARK3PARACHUTESYSTEMOBSERVER_H
#include "ParachuteSystemObserver.h"
class Mark3ParachuteSystemObserver :public  ParachuteSystemObserver {

private:
	int observerCurrentHight;
	DragonSpacecraft* Dragon_subj;
	CrewDragonSpacecraft* CrewDragon_subj;

public:
	void update();
};

#endif
