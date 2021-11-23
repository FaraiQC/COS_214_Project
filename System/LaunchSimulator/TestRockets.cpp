#include "TestRockets.h"
#include <unistd.h>
#include <iostream>
#include <string>

/**
 * @brief Construct a new Test Rockets:: Test Rockets object
 * 
 */
TestRockets::TestRockets()
{

}

/**
 * @brief tests the rockets
 * 
 * @return vector<Rocket*> 
 */
vector<Rocket*> TestRockets::testRockets()
{
        int choice;
        int fuel;
        cout<<"This is the testing for the Falcon 9 Rocket."<<endl;
        cout<<"------------------------------------------------------"<<endl;

            RocketBuilderDirector builderDirector;
            FalconNineBuilder falconNineBuilder;
            builderDirector.setBuilder(&falconNineBuilder);
            builderDirector.buildFalconNine("FLCHVY01");
            cout <<"Falcon9 ID: " << falconNineBuilder.getRocket()->getName() << endl;
            cout<<endl;
            cout<<"Input the amount of Kerosene fuel you would like to use for the Rocket.\n>";
            cin>>fuel;
            falconNineBuilder.getRocket()->getStageOne()->setFuel(fuel);
            cout<<"Adding fuel to the Falcon core and Vacuum Engine..."<<endl;
            sleep(1);

            if(falconNineBuilder.getRocket()->test()==true)
            {   
                rocketList.push_back(falconNineBuilder.getRocket());
            }
    
            cout<<"We are going to begin testing for the Falcon Heavy Rocket."<<endl;
            cout<<"------------------------------------------------------"<<endl;
            RocketBuilderDirector builderDirector2;
            FalconHeavyBuilder falconHeavyBuilder;
            builderDirector2.setBuilder(&falconHeavyBuilder);
            builderDirector2.buildFalconHeavy("FLCHVY02");
            cout <<"FalconHeavy ID: " << falconHeavyBuilder.getRocket()->getName() << endl;
            cout<<endl;
            cout<<"Input the amount of fuel you would like to use for the Rocket.\n>";
            cin>>fuel;
            falconHeavyBuilder.getRocket()->getStageOne()->setFuel(fuel);
            if(falconHeavyBuilder.getRocket()->test()==true)
            {
                rocketList.push_back(falconHeavyBuilder.getRocket());
            }
    

    return rocketList;
}

/**
 * @brief attsches a spacecraft
 * 
 * @param spacecraft 
 * @return true 
 * @return false 
 */
bool TestRockets::attachSpaceCraft(Spacecraft* spacecraft) //I'll fix it in simulator (or -tion)
{
    return rocketList[1]->getStageTwo()->attachSpacecraft(spacecraft); //check bool if possible
}

/**
 * @brief attaches a satellite cluster
 * 
 * @param cluster 
 * @return true 
 * @return false 
 */
bool TestRockets::attachSatellite(TestSatellites* cluster)
{
    return rocketList[0]->getStageTwo()->attachSatellite(cluster);
}

/**
 * @brief defines the rocket before it is launched
 * 
 */
void TestRockets::BeforeLaunch()
{
    string falconName = TypeRocket();
    string spacecraftName;
    string outPut;
    
    outPut = falconName + " has ";   

    if(HasSpacecraft())
    {
        if(spacecraft->isCrewDragon()==true)
            spacecraftName = "CrewDragon";
        else
            spacecraftName = "DracoSpacecraft";

        outPut += " a " + spacecraftName + " with payload " + "spacecraft.getPayload()\n";
    }
    else if(HasSatellites())
    {
        outPut += " a full Cluster of Satellites.";  
    }
}

/**
 * @brief detached the spacecraft
 * 
 */
void TestRockets::ReleaseSpaceCraft()
{
    this->spacecraft = NULL;
}

/**
 * @brief detaches the satellite cluster
 * 
 */
void TestRockets::ReleaseSatellites()
{
    this->satellites = NULL;
}


/**
 * @brief checks if a spacecraft is attached
 * 
 * @return true 
 * @return false 
 */
bool TestRockets::HasSpacecraft()
{
    if(spacecraft==NULL)
        return false;

    return true;
}

/**
 * @brief checks if a satellite is attached
 * 
 * @return true 
 * @return false 
 */
bool TestRockets::HasSatellites()
{
    if(HasSpacecraft())
        return false;

    return true;
}

/**
 * @brief gets the type of the rocket
 * 
 * @return string 
 */
string TestRockets::TypeRocket()
{
    return typeRocket;
}

/**
 * @brief setter the typeRocket
 * 
 * @param s 
 */
void TestRockets::setTypeRocket(string s)
{
    typeRocket=s;
}

/**
 * @brief Destroy the Test Rockets:: Test Rockets object
 * 
 */
TestRockets::~TestRockets(){}
