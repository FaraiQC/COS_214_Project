#ifndef MARK3PARACHUTE_H
#define MARK3PARACHUTE_H

class Mark3Parachute : Parachute {

private:
	int successRate;
	int stoppingPower;
public:

	Mark3Parachute();

	void ~Mark3Parachute();

	void deploy();

	/**
	 * will always return 10
	 */
	 int calculateSuccessRate();
	 void setStoppingPower(int stoppingPower);

	 int getStoppingPower();
};

#endif
