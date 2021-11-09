#ifndef MARK3PARACHUTE_H
#define MARK3PARACHUTE_H
#include "Parachute.h"

class Mark3Parachute :public Parachute {

private:
	int successRate;
	int stoppingPower;
public:

	Mark3Parachute();
	~Mark3Parachute();
	void deploy();
	/**
	 * will always return 10
	 */
	 int calculateSuccessRate();
	 void setStoppingPower(int stoppingPower);
	 int getStoppingPower();
};

#endif
