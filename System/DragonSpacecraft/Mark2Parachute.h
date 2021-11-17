#ifndef MARK2PARACHUTE_H
#define MARK2PARACHUTE_H
#include "Parachute.h"

#include <string>

using namespace std;

class Mark2Parachute :public Parachute {
	private:
	int chech;
	public:
		Mark2Parachute();
		Mark2Parachute(string);
		~Mark2Parachute();
		void deploy();
	
};
#endif
