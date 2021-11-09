#ifndef MARK2PARACHUTESYSTEMOBSERVER_H
#define MARK2PARACHUTESYSTEMOBSERVER_H
#include "DragonSpacecraft.h"
#include "CrewDragonSpacecraft.h"
#include "ParachuteSystemObserver.h"

class Mark2ParachuteSystemObserver :public ParachuteSystemObserver {

private:
	int* observerCurrentHight;
	DragonSpacecraft* Dragon_subj;
	CrewDragonSpacecraft* CrewDragon_subj;

public:
	void update();
	void operation();
};

#endif
