#include "DragonSpacecraft.h"
#include <iostream>

using namespace std;

DragonSpacecraft::DragonSpacecraft() {
	cout<<"The Dragon spacecraft has been created"<<endl;
}



double DragonSpacecraft::currentWeight() {
	double weight=0;
	for(Cargo* item: spacecraftCargo){
		weight += item->getWeight();
	}
	return weight;
}


void DragonSpacecraft::loadCargo(Cargo* cargo) {
	this->spacecraftCargo.push_back(cargo);
}


void DragonSpacecraft::removeCargo(Cargo* cargo) {
	remove(spacecraftCargo.begin(), spacecraftCargo.end(), cargo);
	// for(Cargo* item: cargoList){							//do not delete though
	// 	if(item == cargo){
	// 		cargoList.erase(i);
	// 	}
	// 	i++;
	// }
}
