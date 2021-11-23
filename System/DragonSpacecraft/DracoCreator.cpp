#include "DracoCreator.h"

/**
 * @brief creates a new draco
 * 
 * @param i 
 * @return Thruster* 
 */
Thruster* DracoCreator::createThruster(string i){
	return new Draco(i);
}
