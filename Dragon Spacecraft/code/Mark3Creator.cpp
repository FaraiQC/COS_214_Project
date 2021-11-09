#include "Mark3Creator.h"
#include <iostream>

using namespace std;

Mark3Creator::Mark3Creator() {
	cout<<"Ready to create Mark3 Parachutes."<<endl;
}
Parachute* Mark3Creator::createParachute() {
	return new Mark3Parachute();
}

