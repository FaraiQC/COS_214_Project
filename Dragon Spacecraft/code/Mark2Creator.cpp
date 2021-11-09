#include "Mark2Creator.h"
#include <iostream>

using namespace std;

Mark2Creator::Mark2Creator() {
	cout<<"Ready to create Mark2 Parachutes."<<endl;
	//correct
}

Parachute* Mark2Creator::createParachute() {
	return new Mark2Parachute();
}
