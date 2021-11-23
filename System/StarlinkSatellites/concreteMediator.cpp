#include "concreteMediator.h"
#include <iostream>
#include <string>

using namespace std;


/**
 * @brief Spreads the satellites evenly then switches off all of their lasers
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 * 
 */
void concreteMediator::notify() {
    std::cout
        << "\n\t\tCONFIGURATION COMPLETE\n"
        << "\t\t\t+> All Satellites are spread equally\n"
        << "\t\t\t+>Satellite's lasers have been turned Off\n"
        << std::endl;
}



/**
 * @brief Construct a new concrete Mediator::concrete Mediator object
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 * 
 */
concreteMediator::concreteMediator() : SatelliteMediator()
{

}


/**
 * @brief Destroy the concrete Mediator::concrete Mediator object
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 * 
 */
concreteMediator::~concreteMediator()
{
    
}


/**
 * @brief FINAL EDIT CREDS
 * 
 * @author Malope Elphus (u20451696)
 * 
 */
