#ifndef PARACHUTE_H
#define PARACHUTE_H

class Parachute {

private:
	int successRate;
	int stoppingPower;

public:
	Parachute();

	void setStoppingPower(int stoppingPower);

	int getStoppingPower();

	void deploy();

	int calculateSuccessRate();
};

#endif
