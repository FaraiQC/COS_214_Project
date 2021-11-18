#include "StageTwo.h"
#include "thread"
#include "chrono"
#include <iostream>
#include <sstream>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

StageTwo::StageTwo(string id) : Stage(id) {

}


void StageTwo::attachSpacecraft(Spacecraft *spacecraft) {
    this->capsule = spacecraft;
}

void StageTwo::attachSatellite(Satellite *satellite) {
    this->satellite = satellite;
}

void StageTwo::detachSpacecraft()
{
    cout<<"Spacecraft is detaching from rocket.."<<endl;
    capsule=NULL;
}

void StageTwo::detachSatellite()
{
    cout<<"Satellites are detaching from the rocket and are reacing orbit..."<<endl;
    satellite=NULL;
}

void StageTwo::activate() {
    cout << "Stage two is now taking off" << endl;
    engines[0]->turnOn();
    for (int i = 3; i > 0; --i) {
        cout << '*';
        this_thread::sleep_for(chrono::seconds(1));
    }
}

void StageTwo::deactivate() {
    cout << "Stage Two Engines will now turn Off" << endl;
    engines[0]->turnOff();
}

void StageTwo::addEngine(Engine* engine) {
        engines.push_back(engine);
}

bool StageTwo::testEngine()
{
    cout<<endl;
     cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tStage One succesful, testing stage two..."<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tInitiating static fire test..."<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    sleep(1);
    cout<<endl;
    for(int i=0;i<numEngines;i++)
    {
        engines[i]->turnOn();
    }
    cout<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tVacuum engine has been initiated..."<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<endl;
    
    srand(time(0));
    for(int i=0;i<numEngines;i++)
    {
        int rand;
        rand= (std::rand()%10)+1;
        if(rand%2==0)
        {
            EngineOptimisation* state = new EngineOptimum();
            engines[i]->setReadyState(state);
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
        cout<<"Vacuum engine is optimum and has passed the test, proceed to launch..."<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
        return true;
    }
    else{
        
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"\t\tVacuum engine has failed the test, tweaking the engine..."<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
        srand(time(0));

        int rand=(std::rand()%10)+1;
        if(rand%2==0)
        {
            for(int i=0;i<numEngines;i++)
            {
                EngineOptimisation* state = new EngineOptimum();
                engines[i]->setReadyState(state);
            }
            sleep(2.5);
            cout<<endl;
            printEngines();
            
            cout<<"----------------------------------------------------------------------------"<<endl;
            cout<<"\t\tVacuum engine is optimum and is ready for launch..."<<endl;
            cout<<"----------------------------------------------------------------------------"<<endl;
            return true;
        }
        else
        {
            sleep(2.5);
            cout<<endl;
            printEngines();
            
            cout<<"-----------------------------------------------------------------------------------------"<<endl;
            cout<<"Vacuum engine is not optimum and is not ready for lanch, rocket cannot be launched..."<<endl;
            cout<<"-----------------------------------------------------------------------------------------"<<endl;
            return false;
        }
        
    }

}

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

void StageTwo::printEngines()
{
    for(int i=0;i<numEngines;i++)
    {
        
        cout<<engines[i]->getId()<<" is ";
        engines[i]->notify();
        cout<<endl;
        sleep(1);
    }
}

void StageTwo::setNum(int s)
{
    numEngines=s;
}

StageTwo::~StageTwo() = default;