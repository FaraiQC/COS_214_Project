#include "StageOne.h"
#include "thread"
#include "chrono"
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <iostream>

StageOne::StageOne(string id) : Stage(id) {
}

void StageOne::addEngine(Engine* engine) {
   engines.push_back(engine);
}

void StageOne::activate() {
    cout << "Launching in:\n";
    for (int i = 10; i > 0; --i) {
        cout << i << std::endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    std::cout << "Lift off!!!!!!!!!!!!!\n";
    this_thread::sleep_for(chrono::seconds(5));
}

void StageOne::land() {

}

void StageOne::deactivate() {
    cout << " Engines are turning off..." << endl;
    for (int i = 0; i < engines.size(); ++i) {
        engines[i]->turnOff();
    }
}

bool StageOne::testEngines()
{
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tInitiating static fire test..."<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    sleep(1);
    for(int i=0;i<numEngines;i++)
    {
        engines[i]->turnOn();
        sleep(1);
    }
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tAll engines have been initiated..."<<endl;
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
        cout<<"All engines are optimum and have passed the test, proceed to launch..."<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
        return true;
    }
    else{
        
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"\t\tEnigines have failed the test, tweaking engines..."<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<"teaking..."<<endl;
            sleep(1);
        }

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
            cout<<"\t\tAll engines are optimum and are ready to launch..."<<endl;
            cout<<"----------------------------------------------------------------------------"<<endl;
            return true;
        }
        else
        {
            sleep(2.5);
            cout<<endl;
            printEngines();
            
            cout<<"----------------------------------------------------------------------------"<<endl;
            cout<<"Not all engines are optimum and have failed the test, rocket cannot be launched..."<<endl;
            cout<<"----------------------------------------------------------------------------"<<endl;
            return false;
        }

        
        
    }

}

void StageOne::printEngines()
{
    for(int i=0;i<numEngines;i++)
    {
        
        cout<<engines[i]->getId()<<" is ";
        engines[i]->notify();
        sleep(1);
    }
}

bool StageOne::determineOptimisation()
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

void StageOne::setNum(int s)
{
    numEngines=s;
}

StageOne::~StageOne() = default;
