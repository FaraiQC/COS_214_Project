#include "Mark2Creator.h"
#include <iostream>

using namespace std;

/**
 * @brief Construct a new Mark 2 Creator:: Mark 2 Creator object
 * 
 */
Mark2Creator::Mark2Creator() {
	cout<<"create Mark2 Parachutes."<<endl;
}

/**
 * @brief creates a parachute
 * 
 * @param a 
 * @return Parachute* 
 */
Parachute* Mark2Creator::createParachute(string a) {
	cout<<"Mark2 Parachute has been created"<<endl;
	return new Mark2Parachute(a);

}
