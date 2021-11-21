#ifndef TESTSPACECRAFT_H
#define TESTSPACECRAFT_H

#include <iostream>
#include <vector>
#include <unistd.h>         //for sleep
#include "../DragonSpacecraft/Spacecraft.h"

#include "../DragonSpacecraft/Cargo.h"
#include "../DragonSpacecraft/CrewMember.h"

#include "../DragonSpacecraft/CrewDragonSpacecraft.h"
#include "../DragonSpacecraft/DragonSpacecraft.h"

#include "../DragonSpacecraft/ThrusterCreator.h"
#include "../DragonSpacecraft/DracoCreator.h"
#include "../DragonSpacecraft/SuperDracoCreator.h"
#include "../DragonSpacecraft/Thruster.h"
#include "../DragonSpacecraft/Draco.h"
#include "../DragonSpacecraft/SuperDraco.h"

#include "../DragonSpacecraft/ParachuteCreator.h"
#include "../DragonSpacecraft/Mark2Creator.h"
#include "../DragonSpacecraft/Mark3Creator.h"
#include "../DragonSpacecraft/Parachute.h"
#include "../DragonSpacecraft/Mark3Parachute.h"
#include "../DragonSpacecraft/Mark2Parachute.h"

#include "../DragonSpacecraft/ParachuteSystemObserver.h"
#include "../DragonSpacecraft/Mark2ParachuteSystemObserver.h"
#include "../DragonSpacecraft/Mark3ParachuteSystemObserver.h"

using namespace std;

class TestSpacecraft{
    private:
        vector<Spacecraft*> successfulSpacecrafts;
    public:
        TestSpacecraft();
        ~TestSpacecraft();
        void test(Spacecraft*);
        vector<Spacecraft*> initSpacecraft();
        vector<Spacecraft*> getSpacecraftList();
        void tweakSpacecraft(Spacecraft*);
};
#endif