#include "concreteMediator.h"
#include <iostream>
#include <string>

using namespace std;


/**
 * @brief Notify
 * 
 */
void concreteMediator::notify() 
{
    cout<<"Configuration done! All Satellites are spread equally.\n";
    cout<<"Satellite's lasers have been turned Off.\n";
}


//@brief constructor

/**
 * @brief Constructor
 * 
 * @return concreteMediator 
 */
concreteMediator :: concreteMediator() : SatelliteMediator()
{

}

//@brief Destructor

/**
 * @brief Destructor
 * 
 * @return concreteMediator 
 */
concreteMediator :: ~concreteMediator()
{
    
}
