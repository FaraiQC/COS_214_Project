#include "DracoCreator.h"

//@brief Creates a new Draco with an ID
//@param i is the ID of the Draco to be created
//@return returns the new Draco that was created
Thruster* DracoCreator::createThruster(string i){
	return new Draco(i);
}
