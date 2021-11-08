#include "Mark3Creator.h"
#include <iostream>

using namespace std;

Parachute* Mark3Creator::createParachute() {
	cout<<"Ready to create Mark3 Parachutes."<<endl;
}

Mark3Creator::Mark3Creator() {
	return new Mark3Parachute();
}
