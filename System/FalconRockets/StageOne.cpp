#include "StageOne.h"
#include "thread"
#include "chrono"
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <iostream>

/**
 * @brief Construct a new Stage One:: Stage One object
 * 
 * @param id 
 */
StageOne::StageOne(string id) : Stage(id) {
}

/**
 * @brief appends an engine to the list of engines
 * 
 * @param engine engine to append
 */
void StageOne::addEngine(Engine* engine) {
   engines.push_back(engine);
}

/**
 * @brief handles the rockets launch 
 * 
 */
void StageOne::activate() {
    for (Engine *e : engines) {
        e->turnOn();
    }

    cout << "Launching in:\n";

    for (int i = 10; i > 0; --i) {
        cout <<"\t\t\t\t"<< i << std::endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    std::cout << "Lift off ";
    for (int i = 0; i < 5; ++i) {
        cout << " ! ";
        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << endl;
}

/**
 * @brief handles the landing of stage one
 * 
 */
void StageOne::land() {
    
}

/**
 * @brief turns off all the engines 
 * 
 */
void StageOne::deactivate() {
    cout << " Engines are turning off..." << endl;
    for (int i = 0; i < engines.size(); ++i) {
        engines[i]->turnOff();
    }
}

/**
 * @brief static fire testing
 * 
 * @return true 
 * @return false 
 */
bool StageOne::testEngines()
{
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tInitiating static fire test..."<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl<<endl;
    sleep(1);
    for(int i=0;i<numEngines;i++)
    {
        engines[i]->turnOn();
        if(type!="Falcon9")
        {
            if(i%5==0)
            {
                sleep(1);
            }
        }
        else
        {
            sleep(1);
        }
        
    }

    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tAll engines have been initiated"<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl<<endl;

    int num;
    if(type=="Falcon9")
    {
        num = 10100;
    }
    else
    {
        num = 30300;
    }

    for(int i=0;i<numEngines;i++)
    {
        if(fuel>0 && fuel<=num)
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
        cout<<"All engines are optimum and have passed the test, proceed to launch..."<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl<<endl;
        for(int i=0;i<numEngines;i++)
        {
            engines[i]->turnOff();
            
        }
        return true;
    }
    else{
        
        while(true)
        {
            if(type =="Falcon9")
            {
                cout<<"----------------------------------------------------------------------------"<<endl;
                cout<<"\t\tEnigines have failed the test."<<endl;
                cout<<"\t\tFuel amount must range between 9000 Litres - 10100 Litres"<<endl;
                cout<<"----------------------------------------------------------------------------"<<endl<<endl;
            }
            else
            {
                cout<<"----------------------------------------------------------------------------"<<endl;
                cout<<"\t\tEnigines have failed the test."<<endl;
                cout<<"\t\tFuel amount must range between 27000 Litres - 30300 Litres"<<endl;
                cout<<"----------------------------------------------------------------------------"<<endl<<endl;
            }

            cout<<"Tweak the fuel amount needed for the Falcon core.\n>";
            cin>>fuel;
            for(int i=0;i<3;i++)
            {
                cout<<"tweaking..."<<endl;
                sleep(1);
            }

            for(int i=0;i<numEngines;i++)
            {

                if(fuel>0 && fuel<=num)
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
                cout<<"All engines are optimum and have passed the test, proceed to stage two testing"<<endl;
                cout<<"----------------------------------------------------------------------------"<<endl;
                for(int i=0;i<numEngines;i++)
                {
                    engines[i]->turnOff();
                    
                }
                return true;
            }
            else{

                continue;
            }

            
            }
        }

}

/**
 * @brief prints all the engine names
 * 
 */
void StageOne::printEngines()
{
    for(int i=0;i<numEngines;i++)
    {
        
        cout<<engines[i]->getId()<<" is ";
        engines[i]->notify();
        if(type!="Falcon9")
        {
            if(i%5==0)
            {
                sleep(1);
            }
        }
        else
        {
            sleep(1);
        }
    }
}

/**
 * @brief determines engines optimisation
 * 
 * @return true 
 * @return false 
 */
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

/**
 * @brief setter for number of engines
 * 
 * @param s 
 */
void StageOne::setNum(int s)
{
    numEngines=s;
}

/**
 * @brief setter for fuel amount
 * 
 * @param f 
 */
void StageOne::setFuel(int f)
{
    fuel=f;
}


/**
 * @brief getter for fuel amount
 * 
 * @param f 
 */
int StageOne::getFuel()
{
    return fuel;
}

/**
 * @brief setter for type of rocket
 * 
 * @param f 
 */
void StageOne::setType(string s)
{
    type=s;
}

/**
 * @brief Destroy the Stage One:: Stage One object
 * 
 */
StageOne::~StageOne() = default;
