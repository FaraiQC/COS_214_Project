#include "TestRockets.h"
#include <unistd.h>
#include <iostream>
#include <string>

/**
 * @brief Construct a new Test Rockets:: Test Rockets object
 * @authors Mabunda Thabo (u19116498)
 * 			Malope Elphus (u20451696)
 * 			Musa Mabasa (u18265163)
 * 			Simphiwe Ndlovu (u19027372)
 * 			Awelani Murovhi (u18335412)
 * 			Kudakwashe Chivunga (u19068752)
 * 			Farai Chivunga (u19068710)
 * 
 */
TestRockets::TestRockets()
{

}

/**
 * @brief testRockets
 * 
 * @return vector<Rocket*> 
 * 
 * @authors Mabunda Thabo (u19116498)
 * 			Malope Elphus (u20451696)
 * 			Musa Mabasa (u18265163)
 * 			Simphiwe Ndlovu (u19027372)
 * 			Awelani Murovhi (u18335412)
 * 			Kudakwashe Chivunga (u19068752)
 * 			Farai Chivunga (u19068710)
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
 * @brief attach spacecraft
 * 
 * @param spacecraft 
 * @return true 
 * @return false 
 * 
 * @authors Mabunda Thabo (u19116498)
 * 			Malope Elphus (u20451696)
 * 			Musa Mabasa (u18265163)
 * 			Simphiwe Ndlovu (u19027372)
 * 			Awelani Murovhi (u18335412)
 * 			Kudakwashe Chivunga (u19068752)
 * 			Farai Chivunga (u19068710)
 */
bool TestRockets::attachSpaceCraft(Spacecraft* spacecraft)
{
    return rocketList[1]->getStageTwo()->attachSpacecraft(spacecraft); 
}


/**
 * @brief attach satellites
 * 
 * @param cluster 
 * @return true 
 * @return false 
 * 
 * @authors Mabunda Thabo (u19116498)
 * 			Malope Elphus (u20451696)
 * 			Musa Mabasa (u18265163)
 * 			Simphiwe Ndlovu (u19027372)
 * 			Awelani Murovhi (u18335412)
 * 			Kudakwashe Chivunga (u19068752)
 * 			Farai Chivunga (u19068710)
 */
bool TestRockets::attachSatellite(TestSatellites* cluster)
{
    return rocketList[0]->getStageTwo()->attachSatellite(cluster);
}

/**
 * @brief Sets up pre_Launch parameters and conditions
 * 
 * @authors Mabunda Thabo (u19116498)
 * 			Malope Elphus (u20451696)
 * 			Musa Mabasa (u18265163)
 * 			Simphiwe Ndlovu (u19027372)
 * 			Awelani Murovhi (u18335412)
 * 			Kudakwashe Chivunga (u19068752)
 * 			Farai Chivunga (u19068710)
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
 * @brief release spacecraft
 * 
 * @authors Mabunda Thabo (u19116498)
 * 			Malope Elphus (u20451696)
 * 			Musa Mabasa (u18265163)
 * 			Simphiwe Ndlovu (u19027372)
 * 			Awelani Murovhi (u18335412)
 * 			Kudakwashe Chivunga (u19068752)
 * 			Farai Chivunga (u19068710)
 * 
 */
void TestRockets::ReleaseSpaceCraft()
{
    this->spacecraft = NULL;
}

/**
 * @brief release satellites
 * 
 * 
 * @authors Mabunda Thabo (u19116498)
 * 			Malope Elphus (u20451696)
 * 			Musa Mabasa (u18265163)
 * 			Simphiwe Ndlovu (u19027372)
 * 			Awelani Murovhi (u18335412)
 * 			Kudakwashe Chivunga (u19068752)
 * 			Farai Chivunga (u19068710)
 * 
 */
void TestRockets::ReleaseSatellites()
{
    this->satellites = NULL;
}

/**
 * @brief checks the rocket
 * 
 * @return true 
 * @return false 
 * 
 * @author Malope Elphus (u20451696)
 */
bool TestRockets::HasSpacecraft()
{
    if(spacecraft==NULL)
        return false;

    return true;
}

/**
 * @brief Checks the rocket
 * 
 * @return true 
 * @return false 
 * 
 * @author Malope Elphus (u20451696)
 */
bool TestRockets::HasSatellites()
{
    if(HasSpacecraft())
        return false;

    return true;
}


/**
 * @brief gets type of rocket
 * 
 * @return string 
 * 
 * 
 * @author Musa Mabasa (u18265163)
 */
string TestRockets::TypeRocket()
{
    return typeRocket;
}

/**
 * @brief set type
 * 
 * @param s 
 * 
 * @author Musa Mabasa (u18265163)
 */
void TestRockets::setTypeRocket(string s)
{
    typeRocket=s;
}

TestRockets::~TestRockets(){}
