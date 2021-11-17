#include "Mark2Creator.h"
#include <iostream>

using namespace std;

Mark2Creator::Mark2Creator() {
	cout<<"create Mark2 Parachutes."<<endl;
}

Parachute* Mark2Creator::createParachute(string a) {
	cout<<"Mark2 Parachute has been created"<<endl;
	return new Mark2Parachute(a);

}
