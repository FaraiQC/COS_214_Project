#ifndef THRUSTERCREATOR_H
#define THRUSTERCREATOR_H

class ThrusterCreator {

private:
	int power;

public:
	Thruster* createThruster(int power);
};

#endif
