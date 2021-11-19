#ifndef LAUNCHSPACECRAFT_H
#define LAUNCHSPACECRAFT_H

#include <iostream>
#include <vector>
#include <unistd.h>         //for sleep
#include "Spacecraft.h"

#include "Cargo.h"
#include "CrewMember.h"

#include "CrewDragonSpacecraft.h"
#include "DragonSpacecraft.h"

#include "ThrusterCreator.h"
#include "DracoCreator.h"
#include "SuperDracoCreator.h"
#include "Thruster.h"
#include "Draco.h"
#include "SuperDraco.h"

#include "ParachuteCreator.h"
#include "Mark2Creator.h"
#include "Mark3Creator.h"
#include "Parachute.h"
#include "Mark3Parachute.h"
#include "Mark2Parachute.h"

#include "ParachuteSystemObserver.h"
#include "Mark2ParachuteSystemObserver.h"
#include "Mark3ParachuteSystemObserver.h"
using namespace std;

class LaunchSpacecraft{    private:
        Spacecraft* spacecraft;
    public:
        LaunchSpacecraft(Spacecraft*);
        void launch();
};
#endif