#include "SuperDracoCreator.h"


/**
 * @brief Creates a SuperdDraco with a specific ID
 * 
 * @param id :-thruster id
 * @return Thruster* :-new SuperDraco
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
Thruster* SuperDracoCreator::createThruster(string id){
	return new SuperDraco(id);
}


/**
 * @brief FINAL EDIT CREDIT
 * 
 * @author Malope Elphus (u20451696)
 * 
 */