#ifndef MARK3PARACHUTESYSTEMOBSERVER_H
#define MARK3PARACHUTESYSTEMOBSERVER_H

class Mark3ParachuteSystemObserver : ParachuteSystemObserver {

private:
	int* observerCurrentHight;
	DragonSpacecraft* Dragon_subj;
	CrewDragonSpacecraft* CrewDragon_subj;

public:
	void update();
};

#endif
