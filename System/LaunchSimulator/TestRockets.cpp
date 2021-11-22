#include "TestRockets.h"
#include <unistd.h>
#include <iostream>
#include <string>

TestRockets::TestRockets()
{

}

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
    
    std::cout 
        << "**** WATCHOUT ****\n"
        << "\t\t\tRocketList size: " << rocketList.size() << std::endl
        << "\n**** END_WATCHOUT ****\n";

    return rocketList;
}

bool TestRockets::attachSpaceCraft(Spacecraft* spacecraft) //I'll fix it in simulator (or -tion)
{
    return rocketList[1]->getStageTwo()->attachSpacecraft(spacecraft); //check bool if possible
}

bool TestRockets::attachSatellite(TestSatellites* cluster)
{
    return rocketList[0]->getStageTwo()->attachSatellite(cluster);
}

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

void TestRockets::ReleaseSpaceCraft()
{
    this->spacecraft = NULL;
}

void TestRockets::ReleaseSatellites()
{
    this->satellites = NULL;
}


/**must these cause the rocket not to launch or be accepted if
    NOT:
*/
bool TestRockets::HasSpacecraft()
{
    if(spacecraft==NULL)
        return false;

    return true;
}

bool TestRockets::HasSatellites()
{
    if(HasSpacecraft())
        return false;

    return true;
}

//TILL HERE: ?
/**IF YES:
    then do we provide a function to do so?
        i.e: if(this == "falcon 9 rocket" && HasSpacecraft()) D O  N O T  L A U N C H; 
                    {why?: logic is simple - falcon 9 cannot go to deepSpace
                    So it can travel to mid/end earth's atmosphere - NOT OUT}

             if(this == "falcon heavy" && HasSatellites()) D O  N O T  L A U N C H;
                    {why?: waste of fuel and falcon rocket equipment,
                    remember we thrive to save - "OPTIMISE" - both on resources
                    spending.}

            i can't think of any other conditions :)
*/

//IF NO: These two functions above are useless - let's save compilation time :)

string TestRockets::TypeRocket()
{
    return typeRocket;
}

void TestRockets::setTypeRocket(string s)
{
    typeRocket=s;
}

TestRockets::~TestRockets(){}
