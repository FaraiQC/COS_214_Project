#include "StageTwo.h"
#include "thread"
#include "chrono"
#include <iostream>
#include <sstream>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <stdio.h>


/**
 * @brief Construct a new Stage Two:: Stage Two object
 * 
 * @param id the id of the stage.
 */
StageTwo::StageTwo(string id) : Stage(id)
{
}

/**
 * @brief "attaches" the spacecraft to stage two.
 * 
 * @param spacecraft 
 */
void StageTwo::attachSpacecraft(Spacecraft *spacecraft)
{
    this->capsule = spacecraft;
}

/**
 * @brief appends engine to the list of engines.
 * 
 * @param engine engine pointer
 */
void StageTwo::addEngine(Engine *engine)
{
    engines.push_back(engine);
}

/**
 * @brief attach the satellite to stage two.
 * 
 * @param satellite 
 */
void StageTwo::attachSatellite(Satellite *satellite)
{
    this->satellite = satellite;
}

/**
 * @brief detach spacecracft to stage two.
 * 
 */
void StageTwo::detachSpacecraft()
{
    cout << "Spacecraft is detaching from rocket.." << endl;
    capsule = NULL;
}

/**
 * @brief detach satelite from the stage
 * 
 */
void StageTwo::detachSatellite()
{
    cout << "Satellites are detaching from the rocket and are reacing orbit..." << endl;
    satellite = NULL;
}

/**
 * @brief "launch stage two to desired orbit then release spacecraft"
 * 
 */
void StageTwo::activate()
{
    cout << endl;
    engines[0]->turnOn();
    cout << "Stage two is now taking off ";
    for (int i = 5; i > 0; --i)
    {
        cout << "! " << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << "\nSpacecraft has reached desired orbit." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    deactivate();

    cout << "Stage Two is now separating from Dragon Spacecraft ";
    for (int i = 5; i > 0; --i)
    {
        cout << "<--> " << endl;
        
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << "\nDragon has now separated from Stage Two" << endl;

    // This is where we are going to call the Spacecraft launch function since stage two & spacecraft have separated.
}

/**
 * @brief turns off all the engines.
 * 
 */
void StageTwo::deactivate()
{
    cout << "Stage Two Engine will now turn Off" << endl;
    engines[0]->turnOff();
}


/**
 * @brief test all engines to check if the are in optimum state.
 * 
 * @return true 
 * @return false 
 */
bool StageTwo::testEngine()
{
    cout << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "\t\t\tStage One succesful, testing stage two..." << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "\t\t\tInitiating static fire test..." << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    sleep(1);
    cout << endl;
    for (int i = 0; i < numEngines; i++)
    {
        engines[i]->turnOn();
    }
    cout << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "\t\t\tVacuum engine has been initiated..." << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << endl;

    srand(time(0));
    for (int i = 0; i < numEngines; i++)
    {
        int rand;
        rand = (std::rand() % 10) + 1;
        if (rand % 2 == 0)
        {
            EngineOptimisation *state = new EngineOptimum();
            engines[i]->setReadyState(state);
        }
        else
        {
            EngineOptimisation *state = new EngineNotOptimum();
            engines[i]->setReadyState(state);
        }
    }
    printEngines();
    cout << endl;

    if (determineOptimisation() == true)
    {
        cout << "----------------------------------------------------------------------------" << endl;
        cout << "Vacuum engine is optimum and has passed the test, proceed to launch..." << endl;
        cout << "----------------------------------------------------------------------------" << endl;
        return true;
    }
    else
    {

        cout << "----------------------------------------------------------------------------" << endl;
        cout << "\t\tVacuum engine has failed the test, tweaking the engine..." << endl;
        cout << "----------------------------------------------------------------------------" << endl;
        srand(time(0));

        int rand = (std::rand() % 10) + 1;
        if (rand % 2 == 0)
        {
            for (int i = 0; i < numEngines; i++)
            {
                EngineOptimisation *state = new EngineOptimum();
                engines[i]->setReadyState(state);
            }
            sleep(2.5);
            cout << endl;
            printEngines();

            cout << "----------------------------------------------------------------------------" << endl;
            cout << "\t\tVacuum engine is optimum and is ready for launch..." << endl;
            cout << "----------------------------------------------------------------------------" << endl;
            return true;
        }
        else
        {
            sleep(2.5);
            cout << endl;
            printEngines();

            cout << "-----------------------------------------------------------------------------------------" << endl;
            cout << "Vacuum engine is not optimum and is not ready for lanch, rocket cannot be launched..." << endl;
            cout << "-----------------------------------------------------------------------------------------" << endl;
            return false;
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
    for (int i = 0; i < numEngines; i++)
    {
        if (engines[i]->getReadyState() == "not Optimum")
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
    for (int i = 0; i < engines.size(); i++)
    {

        cout << engines[i]->getId() << " is ";
        engines[i]->notify();
        cout << endl;
        sleep(1);
    }
}

/**
 * @brief set number of engines
 * 
 * @param s is number of engines
 */
void StageTwo::setNum(int s)
{
    numEngines = s;
}

/**
 * @brief Destroy the Stage Two:: Stage Two object
 * 
 */
StageTwo::~StageTwo() = default;