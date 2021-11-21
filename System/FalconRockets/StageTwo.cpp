#include "StageTwo.h"
#include "thread"
#include "chrono"
#include <iostream>
#include <sstream>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
//#include "../Satellites/satellitesMaker.h"

/**
 * @brief Construct a new Stage Two:: Stage Two object
 * 
 * @param id the id of the stage.
 */
StageTwo::StageTwo(string id) : Stage(id) {

}

/**
 * @brief "attaches" the spacecraft to stage two.
 * 
 * @param spacecraft 
 */
bool StageTwo::attachSpacecraft(Spacecraft* spaceCraft)  //I'll fix it in simulator (or -tion)
{
    if(this->satellites != NULL){
        std::cout
            << "The rocket has already been attached to a cluster of satellites\n";

        return false;
    }

    this->capsule=spaceCraft;

    return true;
}

/**
 * @brief "attaches" the  satelitte cluster to stage two.
 * 
 * @param spacecraft 
 */
bool StageTwo::attachSatellite(TestSatellites* cluster)
{
    if(this->capsule != NULL){
        //SAME STORY
        std::cout
            << "The rocket has already been attached to a spacecraft: " ;
            if(capsule->isCrewDragon()==true)
                std::cout << "CrewDragon.\n";
            else
                std::cout << "DracoSpacecraft\n";

        return false;
    }

    this->satellites = cluster;

    return true;
}

// void StageTwo::attachSpacecraft(Spacecraft *spacecraft) {
//     this->capsule = spacecraft;
// }

// void StageTwo::attachSatellite(Satellite *satellite) {
//     this->satellite = satellite;
// }

//*****************************************************************************

/**
 * @brief "detaches" the spacecraft from stage two.
 * 
 * @param spacecraft 
 */
void StageTwo::detachSpacecraft()
{
    cout<<"Spacecraft is detaching from rocket.."<<endl;
    capsule=NULL;
}

/**
 * @brief "detaches" the satellite cluster from stage two.
 * 
 * @param spacecraft 
 */
void StageTwo::detachSatellite()
{
    cout<<"Satellites are detaching from the rocket and are reacing orbit..."<<endl;
    satellites=NULL;
}

/**
 * @brief "launch stage two to desired orbit then release spacecraft"
 * 
 */
void StageTwo::activate() {
    cout << endl;
    engines[0]->turnOn();
    cout << "Stage two is now taking off ";
    for (int i = 5; i > 0; --i)
    {
        cout << "! " << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }

    if(capsule!=NULL)
        cout << "\nSpacecraft has reached desired orbit." << endl;
    else
        cout << "\nSatellite cluster has reached desired orbit." << endl;

    cout << "\nSpacecraft has reached desired orbit." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    deactivate();

    if(capsule!=NULL)
        cout << "Stage Two is now separating from Dragon Spacecraft ";
    else
        cout << "Stage Two is now separating from Satellite cluster ";
    for (int i = 5; i > 0; --i)
    {
        cout << "<--> " << endl;
        
        this_thread::sleep_for(chrono::seconds(1));
    }
    if(capsule!=NULL)
        cout << "\nSpacecraft has now separated from Stage Two" << endl;
    else
        cout << "\nSatelittes have now separated from Stage Two" << endl;
    

    // This is where we are going to call the Spacecraft launch function since stage two & spacecraft have separated.
}

/**
 * @brief turns off all the engines.
 * 
 */
void StageTwo::deactivate() {
    cout << "Stage Two Engines will now turn Off" << endl;
    engines[0]->turnOff();
}

/**
 * @brief appends engine to the list of engines.
 * 
 * @param engine engine pointer
 */
void StageTwo::addEngine(Engine* engine) {
        engines.push_back(engine);
}

/**
 * @brief test all engines to check if the are in optimum state.
 * 
 * @return true 
 * @return false 
 */
bool StageTwo::testEngine()
{

    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tStage One successful, testing stage two..."<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"Input the amount of liquid Oxygen fuel for the Vacuum engine: ";
    cin>>fuel;

    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tInitiate the engine..."<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    sleep(1);
    for(int i=0;i<numEngines;i++)
    {
        engines[i]->turnOn();
        sleep(1);
    }
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tThe engine has been initiated..."<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<endl;
    
    for(int i=0;i<numEngines;i++)
    {

        if(fuel>=1000 && fuel<=1500)
        {
            EngineOptimisation* state = new EngineOptimum();
            engines[i]->setReadyState(state);
            fuel-=1000;
        }
        else
        {
            EngineOptimisation* state = new EngineNotOptimum();
            engines[i]->setReadyState(state);
        }
        
    }
    printEngines();
    cout<<endl;

    if(determineOptimisation()==true)
    {
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"The engine is optimum and has passed the test, proceed to launch..."<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
        return true;
    }
    else{
        
        while(true)
        {
            cout<<"----------------------------------------------------------------------------"<<endl;
            cout<<"\t\tEnigine has failed the test."<<endl;
            cout<<"\t\tFuel amount must range between 1000l - 1500l"<<endl;
            cout<<"----------------------------------------------------------------------------"<<endl;
            cout<<"Tweak the fuel amount needed for the Vacuum engine: ";
            cin>>fuel;
            for(int i=0;i<3;i++)
            {
                cout<<"tweaking..."<<endl;
                sleep(1);
            }

            for(int i=0;i<numEngines;i++)
            {

                if(fuel>0 && fuel<=1500)
                {
                    EngineOptimisation* state = new EngineOptimum();
                    engines[i]->setReadyState(state);
                    fuel-=1000;
                }
                else
                {
                    EngineOptimisation* state = new EngineNotOptimum();
                    engines[i]->setReadyState(state);
                }
                
            }
            printEngines();
            cout<<endl;

            if(determineOptimisation()==true)
            {
                cout<<"----------------------------------------------------------------------------"<<endl;
                cout<<"The engine is optimum and has passed the test, proceed to launch..."<<endl;
                cout<<"----------------------------------------------------------------------------"<<endl;
                engines[0]->turnOff();
                return true;
            }
            else{

                continue;
            }

            
            }
        }

}

/**
 * @brief determines engines optimisation
 * 
 * @return true 
 * @return false 
 */
bool StageTwo::determineOptimisation()
{
    for(int i=0;i<numEngines;i++)
    {
       if(engines[i]->getReadyState()=="not Optimum")
       {
           return false;
       }
    }
    return true;
}

/**
 * @brief prints all the engines in the stage.
 * 
 */
void StageTwo::printEngines()
{
    for(int i=0;i<engines.size();i++)
    {
        cout<<engines[i]->getId()<<" is ";
        engines[i]->notify();
        cout<<endl;
        sleep(1);
    }
}

/**
 * @brief checks if stage two has a spacecraft attached to it
 * 
 * @return true
 * @return false
 */
bool StageTwo::HasSpacecraft()
{
    if(capsule!=NULL)
    {
        return true;
    }
    return false;
}

/**
 * @brief checks if stage two has a satellite cluster attached to it
 * 
 * @return true
 * @return false
 */
bool StageTwo::HasSatellites()
{
    if(satellites!=NULL)
    {
        return true;
    }
    return false;
}

/**
 * @brief getter for the spacecraft
 * 
 * @return Spacecraft*
 */
Spacecraft* StageTwo::getSpacecraft()
{
    return capsule;
}

/**
 * @brief getter for the satellites
 * 
 * @return Spacecraft*
 */
TestSatellites* StageTwo::getSatellites()
{
    return satellites;
}

/**
 * @brief setter for number of engines
 * 
 * @param s is number of engines
 */
void StageTwo::setNum(int s)
{
    numEngines=s;
}

/**
 * @brief setter for fuel amount
 * 
 * @param f fuel amount
 */
void StageTwo::setFuel(int f)
{
    fuel=f;
}

/**
 * @brief getter for fuel amount
 * 
 * @param f fuel amount
 */
int StageTwo::getFuel()
{
    return fuel;
}

/**
 * @brief Destroy the Stage Two:: Stage Two object
 * 
 */
StageTwo::~StageTwo() = default;