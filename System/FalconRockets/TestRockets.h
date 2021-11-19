#ifndef TESTROCKETS_H
#define TESTROCKETS_H
#include <iostream>
#include "FalconNineBuilder.h"
#include "FalconHeavyBuilder.h"
#include "RocketBuilderDirector.h"
#include <vector>

class TestRockets{
    private:
        vector<Rocket*> rocketList;

    public:
        TestRockets();

        ~TestRockets();

        vector<Rocket*> testRockets();

        void beforeLaunch();

        void ReleaseSatellites();

        void ReleaseSpaceCraft();

        void AfterLaunch();
};

#endif