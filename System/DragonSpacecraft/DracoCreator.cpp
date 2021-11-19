#include "DracoCreator.h"

Thruster* DracoCreator::createThruster(string i){
	return new Draco(i);
}
