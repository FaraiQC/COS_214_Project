#ifndef THRUSTER_H
#define THRUSTER_H

class Thruster {

private:
	int power;
	boolean spacecraftSwitch;
	string name;

public:
	Thruster();

	void ~Thrusters();

	void setPower(int power);

	int getPower();

	void fireUp();

	void shutDown();
};

#endif
