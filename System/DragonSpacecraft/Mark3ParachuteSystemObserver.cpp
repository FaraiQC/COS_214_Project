#include "Mark3ParachuteSystemObserver.h"
#include <iostream>

using namespace std;

//@brief Constructor initializes the spacecraft pointer
//@param Dragon_Or_Crew_subj is the pointer to the spacecraft

/**
 * @brief Construct a new Mark 3 Parachute System Observer:: Mark 3 Parachute System Observer object
 * 		  & initialises it with a @param
 * 
 * @param Dragon_Or_Crew_subj :-the pointer to the spacecraft
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
Mark3ParachuteSystemObserver::Mark3ParachuteSystemObserver(Spacecraft * Dragon_Or_Crew_subj){
	this->Dragon_Or_Crew_subj=Dragon_Or_Crew_subj;
	observerCurrentHight=0;
	theParachute= new Mark3Parachute();
}

/**
 * @brief updates the current height of the spacecraft
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
void Mark3ParachuteSystemObserver::update() {
	if(Dragon_Or_Crew_subj !=NULL){
		observerCurrentHight=Dragon_Or_Crew_subj->getCurrentHeight();
	}	
}

/**
 * @brief check for height of spacecraft and deploys when less or equal to 6 kilometres
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 * 
 */
void Mark3ParachuteSystemObserver::print(){
	if(observerCurrentHight<=6)// 6 km
		theParachute->deploy();
	else
		std::cout
			<< "\t"
			<< "DEPLOY_PARACHUTE:"
			<< "\n\t\tNegative :-Height not optimum for deployment\n"
			<< std::endl;
}

/**
 * @brief FINAL EDIT CREDIT
 * 
 * @author Malope Elphus (u20451696)
 */