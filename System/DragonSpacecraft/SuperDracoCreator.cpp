#include "SuperDracoCreator.h"

//@brief Creates a SuperdDraco with a specific ID
//@return returns the newly created Super Draco
Thruster* SuperDracoCreator::createThruster(string id){
	return new SuperDraco(id);
}
