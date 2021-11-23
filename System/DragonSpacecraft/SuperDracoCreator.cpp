#include "SuperDracoCreator.h"

/**
 * @brief Construct SuperdDraco and set ID
 * 
 * @param id 
 * @return Thruster* 
 */
Thruster* SuperDracoCreator::createThruster(string id){
	return new SuperDraco(id);
}
