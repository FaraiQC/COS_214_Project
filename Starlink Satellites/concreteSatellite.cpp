#include "concreteSatellite.h"

concreteSatellite::concreteSatellite() {
	
}

void concreteSatellite::setDistance() {
	this->distance = 0.1 ;
}

Satellite* concreteSatellite::Clone() {
	return new Satellite();
}

bool concreteSatellite::getSignal() {
	
}

void concreteSatellite::setSignal() {
	
}

void concreteSatellite::getDistance() {
	
}
