#ifndef TESTROCKETS_H
#define TESTROCKETS_H
#include <iostream>
#include "../FalconRockets/FalconNineBuilder.h"
#include "../FalconRockets/FalconHeavyBuilder.h"
#include "../FalconRockets/RocketBuilderDirector.h"
#include "../StarlinkSatellites/satellitesMaker.h"
#include "../DragonSpacecraft/Spacecraft.h"
#include "../LaunchSimulator/TestSatellites.h"
#include <vector>

class TestRockets{
    private:
        vector<Rocket*> rocketList;
        Spacecraft* spacecraft;
        TestSatellites* satellites;
        string typeRocket;

    public:
        TestRockets();

        ~TestRockets();

        bool attachSpaceCraft(Spacecraft*);

        bool attachSatellite(TestSatellites*);

        vector<Rocket*> testRockets();

        void BeforeLaunch();

        void ReleaseSatellites();

        void ReleaseSpaceCraft();

        void AfterLaunch();

        bool HasSpacecraft();

        bool HasSatellites();

        string TypeRocket();

        void setTypeRocket(string s);
};

#endif
