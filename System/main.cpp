#include "LaunchSimulator/Simulation.h"
#include "LaunchSimulator/Command.h"
#include "LaunchSimulator/SimulationInvoker.h"
#include "LaunchSimulator/TestSimulation.h"
#include "LaunchSimulator/Launch.h" 

#include "unistd.h"

#include <iostream>
#include <string>

using namespace std;

//global vars
    int numOfSavedSimulations = 0;
    int numTestSimulations = 0;
    Simulation* launch = new Simulation();
    Command* command;
    SimulationInvoker* invoke;
    




char Menu();
void Switch(char i);

int main()
{
    
    char menuChoice ;

    cout<<"==============================================================================\n";
    cout<<"                      Welcome to SpaceX Simulator                             \n";
    cout<<"==============================================================================\n";


    Menu();


    return 0;
}

void Switch(char menuChoice)
{
    int choiceNumOfActualSimulations ;
    char OneOrTwo;

    
    switch (menuChoice)
    {
        case '1': {
                    if(numOfSavedSimulations == 0)
                    {
                        cout<<"There are no saved Simulations.\n";
                        Menu();
                    }
                    else
                    {
                        cout<<"Do you want to run ALL simulations/ Specific number of simulations?(1/2) : ";
                        cin>>OneOrTwo;

                        sleep(1);
                        std::cout
                            << "Starting the simulation chosen..."
                            << std::endl;
                        sleep(1);
        
                        
                        if(OneOrTwo == '1')
                        {
                            command = new Launch(launch);
                            invoke =new SimulationInvoker(command);
                            invoke->Invoke();

                            numOfSavedSimulations = 0;
                            sleep(1);
                            cout<<"********** ALL ACTUAL simulations have been run ***************\n";
                        }
                        else if(OneOrTwo == '2')
                        {
                            cout<<"How many actual simulations do you want to run? : ";
                            cin>>choiceNumOfActualSimulations;
                            launch->Launch(choiceNumOfActualSimulations);

                            numOfSavedSimulations = 0;
                            sleep(1);
                            cout<<"********** " <<choiceNumOfActualSimulations<<" ACTUAL simulations have been run ***************\n";


                        }
                        
                        Menu();
                        
                    }
                   }
                   break;
        case '2':   {
                        cout<<"-----------------------------------------------------------------.\n";
                        cout<<"                Test Simulation: "<<(++numTestSimulations)<< " \n";
                        cout<<"------------------------------------------------------------------\n";
                        command = new TestSimulation(launch);
                        invoke = new SimulationInvoker(command);
                        invoke->Invoke();
                        sleep(1);
                        cout<<"Test Simulation SUCCESS and saved to batch.\n";
                        sleep(1);
                        ++numOfSavedSimulations;
                        Menu();
                    } 
                    break; 
        case '3':   {
                        exit(0);
                    }
                    break;
        default :   {
                        cout<<"Invalid option\n";
                        Menu();
                    }
    }
}

char Menu()
{
    char menuChoice;

    cout<<"\nMenu: \n\n"
        <<"    1. Run Actual Simulations in Batch (number of saved Simulations : "<<
        numOfSavedSimulations<<")\n"
        <<"    2. Start Test Simulation\n"
        <<"    3. Close\n";
    cin>>menuChoice;

    Switch(menuChoice);
    return menuChoice;
}