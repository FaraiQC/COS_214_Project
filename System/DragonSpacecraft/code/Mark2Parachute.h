#ifndef MARK2PARACHUTE_H
#define MARK2PARACHUTE_H
#include "Parachute.h"

class Mark2Parachute :public Parachute {
	private:
		int stoppingPower;

	public:
		Mark2Parachute();
		~Mark2Parachute();
		void deploy();
		int calculateSuccessRate();
		void setStoppingPower(int stoppingPower);
		int getStoppingPower();
};
#endif
