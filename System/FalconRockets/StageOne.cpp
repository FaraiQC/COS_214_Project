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
 * 
 * @author Awelani Murovhi (u18335412)
 */
StageOne::StageOne(string id) : Stage(id) {
}

/**
 * @brief appends an engine to the list of engines
 * 
 * @param engine engine to append
 * 
 * @author Awelani Murovhi (u18335412)
 */
void StageOne::addEngine(Engine* engine) {
   engines.push_back(engine);
}

/**
 * @brief handles the rockets launch 
 * 
 * @author Malope Elphus (u20451696)
 * 
 */
void StageOne::activate() {
    for (Engine *e : engines) {
        e->turnOn();
    }

    cout << "Launching in:\n";
    std::cout
        << "\n\t\tLAUNCH SEQUENCE: \n";

    for (int i = 5; i > 0; --i) {
        cout <<"\t\t\t\t"<< i << std::endl;
        this_thread::sleep_for(chrono::seconds(1));
    }

    std::cout
        << "\n\t\tLIFT OFF\n";
    for (int i = 0; i < 5; ++i) {
        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << endl;
}

/**
 * @brief handles the landing of stage one
 * 
 * @author Awelani Murovhi (u18335412)
 * 
 */
void StageOne::land() {
    
}

/**
 * @brief turns off all the engines 
 * 
 * @author Malope Elphus (u20451696)
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
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
bool StageOne::testEngines(){
    std::cout
        << "\n\n\t"
        << "STATIC FIRE TEST\n"
        << std::endl;

    sleep(1);

    for(int i=0;i<numEngines;i++){
        engines[i]->turnOn();
        if(type!="Falcon9"){
            if(i%5==0)
            {
                sleep(1);
            }
        } else
            sleep(1);
    }

    std::cout
        << "\n\t\tENGINES INITIATED"
        << std::endl;

    int num;
    if(type=="Falcon9")
        num = 10100;
    else
        num = 30300;

    for(int i=0;i<numEngines;i++){
        if(fuel>0 && fuel<=num){
            EngineOptimisation* state = new EngineOptimum();
            engines[i]->setReadyState(state);
            fuel-=1000;
        } else {
            EngineOptimisation* state = new EngineNotOptimum();
            engines[i]->setReadyState(state);
        }
    }

    printEngines();

    if(determineOptimisation()==true){
        std::cout
            << "\n\t\tSUCCESS\n"
            << std::endl;

        for(int i=0;i<numEngines;i++)
            engines[i]->turnOff();

        return true;
    } else {
        while(true)
        {
            if(type =="Falcon9"){
                std::cout
                    << "\n\t\tFAIL\n"
                    << "\t\t\tMESSAGE: Fuel amount must range between 9000 Litres - 10100 Litres"
                    << std::endl;
            }
            else
            {
                std::cout
                    << "\n\t\tFAIL\n"
                    << "\t\t\tMESSAGE: Fuel amount must range between 27000 Litres - 30300 Litres"
                    << std::endl;
            }

            std::cout
                << "\t\t\tRECOMMENDATION: Tweak fuel amount\n"
                << "\t\t\tInput > ";

            cin>>fuel;

            std::cout
                << "\n\t\tCONFIGURATION IN PROGRESS\n";

            for(int i=0;i<3;i++){
                sleep(1);
            }

            for(int i=0;i<numEngines;i++){
                if(fuel>0 && fuel<=num){
                    EngineOptimisation* state = new EngineOptimum();
                    engines[i]->setReadyState(state);
                    fuel-=1000;
                } else {
                    EngineOptimisation* state = new EngineNotOptimum();
                    engines[i]->setReadyState(state);
                }
            }

            printEngines();

            if(determineOptimisation()==true){
                std::cout
                    << "\n\t\tSTAGE ONE: Success"
                    << std::endl;

                for(int i=0;i<numEngines;i++)
                    engines[i]->turnOff();

                return true;
            } else 
                continue;
        }
    }

}

/**
 * @brief prints all the engine names
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163)
 * 
 */
void StageOne::printEngines(){
    for(int i=0;i<numEngines;i++){
        std::cout
            << "\n\t\t\t"
            << engines[i]->getId() << " | ";

        engines[i]->notify();
        if(type!="Falcon9"){
            if(i%5==0)
            {
                sleep(1);
            }
        }
        else{
            sleep(1);
        }
    }
}

/**
 * @brief determines engines optimisation
 * 
 * @return true 
 * @return false 
 * 
 * @authors Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
bool StageOne::determineOptimisation(){
    for(int i=0;i<numEngines;i++){
       if(engines[i]->getReadyState()=="not Optimum")
           return false;
    }
    return true;
}

/**
 * @brief setter for number of engines
 * 
 * @param s 
 * 
 * @author Musa Mabasa (u18265163)
 */
void StageOne::setNum(int s)
{
    numEngines=s;
}

/**
 * @brief setter for fuel amount
 * 
 * @param f 
 * 
 * @author Musa Mabasa (u18265163)
 */
void StageOne::setFuel(int f)
{
    fuel=f;
}


/**
 * @brief getter for fuel amount
 * 
 * @param f 
 * 
 * @author Musa Mabasa (u18265163)
 */
int StageOne::getFuel()
{
    return fuel;
}

/**
 * @brief setter for type of rocket
 * 
 * @param f 
 * 
 * @author Musa Mabasa (u18265163)
 */
void StageOne::setType(string s)
{
    type=s;
}

/**
 * @brief Destroy the Stage One:: Stage One object
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
StageOne::~StageOne() = default;
