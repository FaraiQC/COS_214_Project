#ifndef MARK3PARACHUTE_H
#define MARK3PARACHUTE_H
#include "Parachute.h"
#include <string>

using namespace std;

class Mark3Parachute :public Parachute {

private:
	
public:
	Mark3Parachute();
	Mark3Parachute(string);
	~Mark3Parachute();
	void deploy();

	
};

#endif
