#include "CrewDragonSpacecraft.h"
#include <iostream>

using namespace std;



/**
 * @brief Construct a new Crew Dragon Spacecraft:: Crew Dragon Spacecraft object
 * 		  on Earth with no crew members
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
CrewDragonSpacecraft::CrewDragonSpacecraft(){

	std::cout
		<< "\t"
		<<"SPACECRAFT: CrewDragon\n\t\tCREATED.\n"
		<<std::endl;

	setCurrentLocation("Earth");
	NumCrewMember=0;
	setIsCrewDragon(true);
}


/**
 * @brief Calculates the total weight of the Crew and the Cargo
 * 
 * @return double :-the calculated weight
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
double CrewDragonSpacecraft::getCurrentWeight(){
	double weight=0;

	for(CrewMember* item: spacecraftCrew)
		weight += item->getWeight();

	for(Cargo* item: getCargoList())
		weight += item->getWeight();

	return weight;
}


/**
 * @brief Gets the current Height of the Spacecraft
 * 
 * @return double :-the current height of the Spacecraft
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
double CrewDragonSpacecraft::getCurrentHeight(){
	return this->currentHeight;
}


/**
 * @brief Sets the current height of the Spacecraft
 * 
 * @param currentHeight :-the current height of the Spacecraft
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void CrewDragonSpacecraft::setCurrentHeight(double currentHeight){
	this->currentHeight = currentHeight;
}


/**
 * @brief Adds crew members to the spacecraftCrew vector
 * 
 * @param member :-the crew member to be added to the spacecraftCrew vector
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void CrewDragonSpacecraft::enterCrewMember(CrewMember* member){
	spacecraftCrew.push_back(member);

	std::cout
		<< "\t"
		<<member->getName()
		<<" has borded the spacecraft\n"
		<<std::endl;

	NumCrewMember++;
}


/**
 * @brief Removes a crew member that is at a specific position in the spacecraftCrew vector
 * 
 * @param index :-the position in the spacecraftCrew vector where a CrewMember will be removed
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void CrewDragonSpacecraft::removeCrewMember(int index){
	spacecraftCrew.erase(spacecraftCrew.begin()+index);
	NumCrewMember--;
}



/**
 * @brief Displays the crew's weight in kilograms
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
void CrewDragonSpacecraft::crewInfo(){
	std::cout
		<< std::endl << std::endl
		<< std::string(70, '=')
		<<"\t\t\tCREW INFORMATION\t\t\t\n"
		<< std::string(70,'-')
		<< std::endl;

	double w = 0;
	int i=0;

	for(CrewMember* item: spacecraftCrew){
		std::cout
			<< "\t"
			<< i+1 << ". "
			<< ". " << item->getName() << std::endl
			<< "\t\tWeight: "<< item->getWeight() <<" Kg"
			<< std::endl;

		w += item->getWeight();
		i++;
	}

	std::cout
		<< "Total crew weight: " << w
		<< std::endl;
}


/**
 * @brief gets the number of crew members
 * 
 * @return NumCrewMember
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
int CrewDragonSpacecraft::getTotalNumCrewMember(){
	return NumCrewMember;
}


/**
 * @brief Gets the list of Crew members
 * 
 * @return vector<CrewMember*> :-spacecraftCrew
 * 
 * @authors Maduna Thabo (u19116498), Simphiwe Ndlovu (u19027372)
 */
vector<CrewMember*> CrewDragonSpacecraft::getCrewList(){
	return spacecraftCrew;
}

/**
 * @brief FINAL EDITS CREDITS
 * 
 * @author Malope Elphus (u20451696)
 * 
 */