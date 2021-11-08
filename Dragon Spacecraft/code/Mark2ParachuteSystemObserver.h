#ifndef MARK2PARACHUTESYSTEMOBSERVER_H
#define MARK2PARACHUTESYSTEMOBSERVER_H

class Mark2ParachuteSystemObserver : ParachuteSystemObserver {

private:
	int* observerCurrentHight;
	DragonSpacecraft* Dragon_subj;
	CrewDragonSpacecraft* CrewDragon_subj;

public:
	void update();

	void operation();
};

#endif
