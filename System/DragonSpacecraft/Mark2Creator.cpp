#include "Mark2Creator.h"
#include <iostream>

using namespace std;

//@brief Consructor Creates a Mark2 Parachute
Mark2Creator::Mark2Creator() {
	cout<<"create Mark2 Parachutes."<<endl;
}

//@brief Creates a Mark2 Parachute with a specific ID
//@param a is the ID of the Parachute
//@return returns a new Mark2Parachute with the given ID
Parachute* Mark2Creator::createParachute(string a) {
	cout<<"Mark2 Parachute has been created"<<endl;
	return new Mark2Parachute(a);

}
