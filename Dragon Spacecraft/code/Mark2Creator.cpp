#include "Mark2Creator.h"

Mark2Creator::Mark2Creator() {
	
}

Parachute* Mark2Creator::createParachute() {
	return new Mark2Parachute();
}
