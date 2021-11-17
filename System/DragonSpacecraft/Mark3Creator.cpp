#include "Mark3Creator.h"
#include <iostream>

using namespace std;

Mark3Creator::Mark3Creator() {
	
}
Parachute* Mark3Creator::createParachute(string a) {
	cout<<"Mark3 Parachute has been created"<<endl;
	return new Mark3Parachute(a);

}

