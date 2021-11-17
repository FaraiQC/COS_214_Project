#include "SuperDracoCreator.h"

Thruster* SuperDracoCreator::createThruster(string id){
	return new SuperDraco(id);
}
