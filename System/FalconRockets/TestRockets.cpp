#include "TestRockets.h"

/**
 * @brief Construct a new Test Rockets:: Test Rockets object
 * 
 */
TestRockets::TestRockets()
{

}

/**
 * @brief Test rockets
 * 
 * @return vector<Rocket*> 
 */
vector<Rocket*> TestRockets::testRockets()
{
    while(true)
    {
        int choice;
        cout<<"Select a rocket that you want to simulate(1: Falcon9 or 2: FalconHeavy or 3: to cancel): ";
        cin>>choice;

        if(choice==1)
        {
            RocketBuilderDirector builderDirector;
            FalconNineBuilder falconNineBuilder;
            builderDirector.setBuilder(&falconNineBuilder);
            builderDirector.buildFalconNine("FLCHVY01");
            cout <<"Falcon9 ID: " << falconNineBuilder.getRocket()->getName() << endl;
            cout<<endl;
            if(falconNineBuilder.getRocket()->test()==true)
            {   
                rocketList.push_back(falconNineBuilder.getRocket());
            }
        }
        else if(choice==2)
        {
            RocketBuilderDirector builderDirector;
            FalconHeavyBuilder falconHeavyBuilder;
            builderDirector.setBuilder(&falconHeavyBuilder);
            builderDirector.buildFalconHeavy("FLCHVY02");
            cout <<"FalconHeavy ID: " << falconHeavyBuilder.getRocket()->getName() << endl;
            cout<<endl;
            if(falconHeavyBuilder.getRocket()->test()==true)
            {
                rocketList.push_back(falconHeavyBuilder.getRocket());
            }
        }
        else if(choice==3)
        {
            break;
        }
        else{
            cout<<"Invalid coice!!!"<<endl;
            cout<<endl;
        }
    }
    return rocketList;
}

/**
 * @brief 
 * 
 */
void TestRockets::beforeLaunch()
{

}

/**
 * @brief 
 * 
 */
void TestRockets::AfterLaunch()
{

}

/**
 * @brief 
 * 
 */
void TestRockets::ReleaseSpaceCraft()
{

}

/**
 * @brief 
 * 
 */
void TestRockets::ReleaseSatellites()
{
    
}

/**
 * @brief Destroy the Test Rockets:: Test Rockets object
 * 
 */
TestRockets::~TestRockets()
{}