#include "ConcreteAntenna.h"

/**
 * @brief Sets radio Signal to equal the subjects signal
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 * 
 */
void ConcreteAntenna::update() {
  radioSignal = subject->getSignal();
}


/**
 * @brief Construct a new Concrete Antenna:: Concrete Antenna object
 *        Sets radio Signal to false
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 * 
 */
ConcreteAntenna::ConcreteAntenna() : Antenna(){
  radioSignal = false;
}



/**
 * @brief Destroy the Concrete Antenna:: Concrete Antenna object
 *        Sets radio Signal to false
 * 
 * @authors Kudakwashe Chivunga (u19068752), Farai Chivunga (u19068710)
 */
ConcreteAntenna::~ConcreteAntenna() {
  radioSignal = false;
}

/**
 * @brief FINAL EDIT CREDS
 * 
 * @author Malope Elphus
 * 
 */
