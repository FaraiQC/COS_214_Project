#ifndef MARK2PARACHUTE_H
#define MARK2PARACHUTE_H

class Mark2Parachute : Parachute {

private:
	int stoppingPower

public:
	Mark2Parachute();

	void ~Mark2Parachute();

	void deploy();

	/**
	 * will create a random int between 0 and 10 if less than 5 unsuccessful
	 */
	int calculateSuccessRate();
	 void setStoppingPower(int stoppingPower);

	 int getStoppingPower();

};

#endif
