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
 * 
 * @author Awelani Murovhi (u18335412)
 */
StageTwo::StageTwo(string id) : Stage(id) {

}

/**
 * @brief "attaches" the spacecraft to stage two.
 * 
 * @param spacecraft 
 * 
 * @author Awelani Murovhi (u18335412), Malope Elphus (u20451696)
 */
bool StageTwo::attachSpacecraft(Spacecraft* spaceCraft)  //I'll fix it in simulator (or -tion)
{
    if(this->satellites != NULL){
        std::cout
            << "\n\t\tROCKET HAS SATELLITES ALREADY\n";

        return false;
    }

    this->capsule=spaceCraft;

    return true;
}

/**
 * @brief "attaches" the  satelitte cluster to stage two.
 * 
 * @param spacecraft 
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
bool StageTwo::attachSatellite(TestSatellites* cluster)
{
    if(this->capsule != NULL){
        std::cout
            << "\n\t\tROCKET HAS SPACECRAFT\n" ;
            if(capsule->isCrewDragon()==true)
                std::cout << "\t\t\tCrewDragon.\n";
            else
                std::cout << "\t\t\tDracoSpacecraft\n";

        return false;
    }

    this->satellites = cluster;

    return true;
}


/**
 * @brief "detaches" the spacecraft from stage two.
 * 
 * @param spacecraft 
 * 
 * @author Awelani Murovhi (u18335412), Malope Elphus (u20451696)
 */
void StageTwo::detachSpacecraft(){
    std::cout
        << "\n\t\tDETACH SPACECRAFT\n";
    capsule=NULL;
}

/**
 * @brief "detaches" the satellite cluster from stage two.
 * 
 * @param spacecraft 
 * 
 * @author Awelani Murovhi (u18335412), Malope Elphus (u20451696)
 */
void StageTwo::detachSatellite(){
    std::cout
        << "\n\t\tDETACH SATELLITES\n";

    satellites=NULL;
}

/**
 * @brief "launch stage two to desired orbit then release spacecraft"
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 * 
 */
void StageTwo::activate() {
    engines[0]->turnOn();
    cout << "Stage two is now taking off ";

    std::cout
        << "\n\tSTAGE TWO\n";
    
    this_thread::sleep_for(chrono::seconds(1));

    std::cout
        << "\t\tTAKE OFF\n";

    for (int i = 10; i > 0; --i)
        this_thread::sleep_for(chrono::seconds(1));

    if(capsule!=NULL)
        std::cout << "\n\t\t\tSpacecraft has reached desired orbit." << std::endl;
    else
        std::cout << "\n\t\t\tSatellite cluster has reached desired orbit." << std::endl;

    this_thread::sleep_for(chrono::seconds(2));

    deactivate();

    if(capsule!=NULL)
        std::cout << "\t\t\tStage Two is now separating from Spacecraft\n";
    else
        std::cout << "\t\t\tStage Two is now separating from Satellite cluster\n";
    for (int i = 5; i > 0; --i)
        this_thread::sleep_for(chrono::seconds(1));

    if(capsule!=NULL)
        cout << "\t\t\tSpacecraft has now separated from Stage Two" << endl;
    else
        cout << "\t\t\tSatelittes have now separated from Stage Two" << endl;
}

/**
 * @brief turns off all the engines.
 * 
 * @author Malope Elphus (u20451696)
 * 
 */
void StageTwo::deactivate() {
    std::cout
        << "\n\t\tSTAGE TWO DEACTIVATED\n";
    engines[0]->turnOff();
}

/**
 * @brief appends engine to the list of engines.
 * 
 * @param engine engine pointer
 * 
 * @author Musa Mabasa (u18265163)
 */
void StageTwo::addEngine(Engine* engine) {
        engines.push_back(engine);
}

/**
 * @brief test all engines to check if the are in optimum state.
 * 
 * @return true 
 * @return false 
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163), Awelani Murovhi (u18335412)
 */
bool StageTwo::testEngine(){
    std::cout
        << "\n\n\tSTAGE TWO TEST\n";

    sleep(1);

    std::cout
        << "\n\t\tAmount of liquid Oxygen fuel\n"
        << "\n\t\t\tInput > ";
        
    cin>>fuel;


    for(int i=0;i<numEngines;i++)
    {
        engines[i]->turnOn();
        sleep(1);
    }

    std::cout
        << "\n\t\tENGINES INITIATED"
        << std::endl;

    for(int i=0;i<numEngines;i++){
        if(fuel>=1000 && fuel<=1500){
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
        engines[0]->turnOff();
        return true;
    } else {
        while(true){
            std::cout
                << "\n\t\tFAIL\n"
                << "\t\t\tMESSAGE: Fuel amount must range between 1000 Litres - 1500 Litres";
        

            std::cout
                << "\t\t\tRECOMMENDATION: Tweak fuel amount\n"
                << "\t\t\tInput > ";

            cin>>fuel;

            sleep(1);

            std::cout
                << "\n\t\tCONFIGURATION IN PROGRESS\n";

            for(int i=0;i<3;i++)
                sleep(1);

            for(int i=0;i<numEngines;i++){
                if(fuel>0 && fuel<=1500){
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
                    << std::endl;engines[0]->turnOff();
                
                engines[0]->turnOff();
                return true;
            } else
                continue;
        }
    }
}

/**
 * @brief determines engines optimisation
 * 
 * @return true :-if(Optimised)
 * @return false :-if(notOptimised)
 * 
 * @author Musa Mabasa (u18265163)
 */
bool StageTwo::determineOptimisation()
{
    for(int i=0;i<numEngines;i++){
       if(engines[i]->getReadyState()=="not Optimum") {
           return false;
       }
    }
    return true;
}

/**
 * @brief prints all the engines in the stage.
 * 
 * @authors Malope Elphus (u20451696), Musa Mabasa (u18265163)
 * 
 */
void StageTwo::printEngines(){
    for(int i=0;i<numEngines;i++){
        std::cout
            << "\n\t\t\t"
            << engines[i]->getId() << " | ";

        engines[i]->notify();
        sleep(1);
    }
}

/**
 * @brief checks if stage two has a spacecraft attached to it
 * 
 * @return true
 * @return false
 * 
 * @author Musa Mabasa (u18265163)
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
 * 
 * @author Musa Mabasa (u18265163)
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
 * 
 * @author Musa Mabasa (u18265163)
 */
Spacecraft* StageTwo::getSpacecraft()
{
    return capsule;
}

/**
 * @brief getter for the satellites
 * 
 * @return Spacecraft*
 * 
 * @author Musa Mabasa (u18265163)
 */
TestSatellites* StageTwo::getSatellites()
{
    return satellites;
}

/**
 * @brief setter for number of engines
 * 
 * @param s is number of engines
 * 
 * @author Musa Mabasa (u18265163)
 */
void StageTwo::setNum(int s)
{
    numEngines=s;
}

/**
 * @brief setter for fuel amount
 * 
 * @param f fuel amount
 * 
 * @author Musa Mabasa (u18265163)
 */
void StageTwo::setFuel(int f)
{
    fuel=f;
}

/**
 * @brief getter for fuel amount
 * 
 * @param f fuel amount
 * 
 * @author Musa Mabasa (u18265163)
 */
int StageTwo::getFuel()
{
    return fuel;
}

/**
 * @brief Destroy the Stage Two:: Stage Two object
 * 
 * @author Musa Mabasa (u18265163)
 * 
 */
StageTwo::~StageTwo() = default;