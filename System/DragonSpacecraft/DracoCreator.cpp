#include "DracoCreator.h"

/**
 * @brief Creates a new Draco with an ID
 * 
 * @param i :-the ID of the Draco to be created
 * @return Thruster* :-a created draco
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
Thruster* DracoCreator::createThruster(string i){
	return new Draco(i);
}

/**
 * @brief FINAL EDIT CREDITS
 * 
 * @author Malope Elphus (u20451696)
 * 
 */
