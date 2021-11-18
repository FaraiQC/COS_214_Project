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

void StageTwo::addEngine() {
        string id="VacuumEngine-";
        string num;
        stringstream ss;
        ss<<1;
        ss>>num;
        id+=num;
        Engine *engine = new VacuumEngine(id);
        engines.push_back(engine);
}

void StageTwo::testEngines()
{
    cout<<"Initiating static fire test..."<<endl;
    sleep(1);
    for(int i=0;i<numEngines;i++)
    {
        engines[i]->turnOn();
    }
    cout<<"Vacuum engine has been initiated..."<<endl;
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
        cout<<"Vacuum engine is optimum and has passed the test, proceed to launch..."<<endl;
    }
    else{
        cout<<"Vacuum engine has failed the test, tweaking the engine..."<<endl;
        for(int i=0;i<numEngines;i++)
        {
            EngineOptimisation* state = new EngineOptimum();
            engines[i]->setReadyState(state);
        }
        sleep(2.5);
        cout<<endl;
        printEngines();
        cout<<"Vacuum engine is optimum and is ready for launch..."<<endl;
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

int StageTwo::setNum(int s)
{
    numEngines=s;
}

StageTwo::~StageTwo() = default;