#include "Mark3Creator.h"
#include <iostream>

using namespace std;

//@brief Constructor
Mark3Creator::Mark3Creator() {
	
}

//@brief creates a Mark3Parachute with a specific id
//@param a is the id of the Parachute
//@return returns the newly created Mark3Parachute
Parachute* Mark3Creator::createParachute(string a) {
	cout<<"Mark3 Parachute has been created"<<endl;
	return new Mark3Parachute(a);

}

