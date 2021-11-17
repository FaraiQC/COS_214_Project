#ifndef TESTSPACECRAFT_H
#define TESTSPACECRAFT_H

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