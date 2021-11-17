// #include <iostream>
// #include "Spacecraft.h"

// #include "Cargo.h"
// #include "CrewMember.h"

// #include "CrewDragonSpacecraft.h"
// #include "DragonSpacecraft.h"

// #include "ThrusterCreator.h"
// #include "DracoCreator.h"
// #include "SuperDracoCreator.h"
// #include "Thruster.h"
// #include "Draco.h"
// #include "SuperDraco.h"

// #include "ParachuteCreator.h"
// #include "Mark2Creator.h"
// #include "Mark3Creator.h"
// #include "Parachute.h"
// #include "Mark3Parachute.h"
// #include "Mark2Parachute.h"

// #include "ParachuteSystemObserver.h"
// #include "Mark2ParachuteSystemObserver.h"
// #include "Mark3ParachuteSystemObserver.h"

#include "TestSpacecraft.h"

using namespace std;

int main(){
    vector<Spacecraft*> a;
    TestSpacecraft* test =new TestSpacecraft();
    a = test->initSpacecraft();
    cout<<"The Spacecrafts returned"<<endl;
    for(Spacecraft* item: a){
        item->print();
    }
    // Spacecraft* spacecraft = new DragonSpacecraft();
    // Cargo* cargo1 = new Cargo("Condo", 55.5);
    // Cargo* cargo2 = new Cargo("Money", 55.8);
    // spacecraft->attachCargo(cargo1);
    // spacecraft->attachCargo(cargo2);
    // spacecraft->print();
    // spacecraft->detachCargo(0);
    // spacecraft->print();
    return 0;
}