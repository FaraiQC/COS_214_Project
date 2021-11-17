#include "TestSpacecraft.h"


TestSpacecraft::TestSpacecraft(){

}

TestSpacecraft::~TestSpacecraft(){

}

void TestSpacecraft::tweakSpacecraft(Spacecraft* spacecraft){
    cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tTweaking Spacecraft Configurations"<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;

    int retweakOption;
    if(spacecraft->isCrewDragon()){
        cout<<"What would you like to tweak?\n 0. Crew Members\t 1. Cargo\t 2. Thrusters\t 3. Parachutes"<<endl;
        while(retweakOption<0 || retweakOption>3){
            cout<<"Please enter valid option"<<endl;
            cin>>retweakOption;
        }
    }
    else{
        cout<<"What would you like to tweak?\n 1. Cargo\t 2. Thrusters\t 3. Parachutes"<<endl;
        cin>>retweakOption;
        while(retweakOption<1 || retweakOption>3){
            cout<<"Please enter valid option"<<endl;
            cin>>retweakOption;
        }
    }
    
    if(retweakOption == 0){
        bool cMembertweakOption;
        cout<<"What do you want to do with Crew Members?\n 0.Add new member(s)\t 1.Remove member(s)"<<endl;
        cin>>cMembertweakOption;
        if(cMembertweakOption == 0){
            spacecraft = new CrewDragonSpacecraft();
            int counterCrew=0;
            bool wantCrew=true;
            while(true){
                if(counterCrew==0){
                    cout<<"\nAdding crew members."<<endl;
                    counterCrew++;
                }
                string memberName;
                double memberWeight;
                cout<<"\nEnter name of crew member."<<endl;
                cin>>memberName;
                cout<<"Enter weight of crew member"<<endl;
                cin>>memberWeight;
                while(memberWeight<0){
                    cout<<"Please enter valid weight"<<endl;
                    cin>>memberWeight;
                }
                spacecraft->enterCrewMember(new CrewMember(memberName, memberWeight));
                
                cout<<"Do you want to enter another member? (0:no 1:yes)"<<endl;
                cin>>wantCrew;
                if(wantCrew == 0){
                    break;
                }
            }

            spacecraft->print();
            test(spacecraft);
        }
        else{
            int memberIndex;
            spacecraft->crewInfo();
            cout<<"Please select the index of the member you want to remove"<<endl;
            cin>>memberIndex;
            while(memberIndex<0 || memberIndex>spacecraft->getCrewList().size()){
                cin>>memberIndex;
            }
            spacecraft->removeCrewMember(memberIndex);
            spacecraft->crewInfo();
        }
    }
    else if(retweakOption == 1){
        bool retweakCargoOption;
        cout<<"What do you want to do to cargo?\n 0. Add more cargo\t 1.Remove some cargo"<<endl;
        cin>>retweakCargoOption;
        if(retweakCargoOption==0){
            while(true){
                int cargoOption = 0;
                cout<<"\nNow please select the cargo to be loaded on the spacecraft.\n 0.Food Supplies\t 1.Spacecraft Equipment tools"<<endl;
                cin>>cargoOption;
                int p = spacecraft->getCargoList().size();
                int cargoWeight =0;
                if(cargoOption > 1 || cargoOption < 0){
                    while(cargoOption>1 || cargoOption<0){
                        cout<<"Please enter a valid option"<<endl;
                        cin>>cargoOption;
                    }
                }
                cout<<"The selected option is "<<cargoOption<<endl;
                
                if(cargoOption == 0){
                    string name = "FoodSupply";
                    Cargo* cargo = new Cargo();
                    name = name + to_string(p);
                    cout<<"\nHow much does the cargo weigh?"<<endl;
                    cin>>cargoWeight;
                    if(cargoWeight<0){
                        while(cargoWeight<0){
                            cout<<"Please enter valid weight"<<endl;
                            cin>>cargoWeight;
                        }
                    }
                    spacecraft->attachCargo(new Cargo(name, cargoWeight));
                }
                else if(cargoOption == 1){
                    string name = "Equipment";
                    Cargo* cargo = new Cargo();
                    name = name + to_string(p);
                    cargo->setName(name);
                    cout<<"How much does the cargo weigh?"<<endl;
                    cin>>cargoWeight;
                    if(cargoWeight<0){
                        while(cargoWeight<0){
                            cout<<"Please enter valid weight"<<endl;
                            cin>>cargoWeight;
                        }
                    }
                    spacecraft->attachCargo(new Cargo(name, cargoWeight));
                }
                p++;
                bool doneCargo;
                cout<<"\nAre you done adding cargo? (1:yes/0:no)"<<endl;
                cin>>doneCargo;
                if(doneCargo == true){
                    break;
                }
            }
        }
        else{
            while(true){
                cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
                cout<<"\t\t\tCrew Information:"<<endl;
                cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
                double w = 0;
                int i=0;
                for(Cargo* item: spacecraft->getCargoList()){
                    cout<<i<<". "<<item->getName()<<" weight: "<<item->getWeight()<<" kg"<<endl;
                    w += item->getWeight();
                    i++;
                }
                cout<<endl;
                cout<<"Total crew weight is: "<<w<<endl;
                cout<<endl;
                
                int cCargoIndex;
                cout<<"Please enter the ID of the cargo you want to remove"<<endl;
                cin>>cCargoIndex;
                while(cCargoIndex<0 ||cCargoIndex>spacecraft->getCargoList().size()){
                    cout<<"Please enter valid index"<<endl;
                    cin>>cCargoIndex;
                }
                spacecraft->detachCargo(cCargoIndex);
                bool doneRCargo;
                cout<<"Do you want to remove another cargo load? (0:No 1:Yes)"<<endl;
                cin >>doneRCargo;
                if(doneRCargo==0){
                    break;
                }
            }
        }
    } 
    else if(retweakOption == 2){
        bool thrusterOptionR;
        cout<<"Would you like to change your thrusters? (0:No 1:Yes)"<<endl;
        cin>>thrusterOptionR;
        if(thrusterOptionR == true){
            bool thrusterOption;
            int thrusterPower;
            cout<<"\nPlease select the type of thrusters you want to use\n0.Draco Thrusters\t 1.SuperDraco Thrusers"<<endl;
            cin>>thrusterOption;
            if(thrusterOption == 0){
                DracoCreator* dracoCreator;
                for(int i=0;i<16;i++){
                    spacecraft->attachThruster(dracoCreator->createThruster("Draco"+to_string(i)));
                }
            }
            else if(thrusterOption == 1){
                SuperDracoCreator* superDracoCreator; 
                for(int i=0;i<16;i++){
                    spacecraft->attachThruster(superDracoCreator->createThruster("SuperDraco"+to_string(i)));
                }
            }
            spacecraft->print();
            test(spacecraft);
        }
    }
    else{
        bool parachuteOptionR;
        cout<<"Would you like to change your thrusters? (0:No 1:Yes)"<<endl;
        cin>>parachuteOptionR;
        if(parachuteOptionR == true){
            bool parachuteOption;
            cout<<"\nPlease select the type of parachute you want to use\n0.Mark2 Parachutes\t 1.Mark3 Parachutes"<<endl;
            cin>>parachuteOption;
            if(parachuteOption == 0){
                Mark2Creator* mark2Creator; 
                for(int i=0;i<4;i++){
                    spacecraft->attachParachute(mark2Creator->createParachute("Mark2Parchute"+to_string(i)));
                }
            }
            else if(parachuteOption == 1){
                Mark3Creator* mark3Creator; 
                for(int i=0;i<4;i++){
                    spacecraft->attachParachute(mark3Creator->createParachute("Mark3Parchute"+to_string(i)));
                }
            }
        }
    }
    test(spacecraft);
}
   

void TestSpacecraft::test(Spacecraft* spacecraft){
    bool isOptimum=spacecraft->IsSpcacecraftInOptimum();
    if(isOptimum == true){
        cout<<"Spacecraft added to the list of working spacecrafts!!"<<endl;
        successfulSpacecrafts.push_back(spacecraft);
    }
    else{
        tweakSpacecraft(spacecraft);
    }
}

vector<Spacecraft*> TestSpacecraft::initSpacecraft(){
    while(true){
        int spacecraftOption = 0;
            Spacecraft* spacecraft = NULL;
            cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"\t\t\tBuilding/Testing Spacecraft Configurations"<<endl;
            cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;


            cout<<"\nWhich type of Spacecraft do you want to use?"<<endl;
            cout<<"0.Dragon Spacecraft \t 1.CrewDragon Spacecraft"<<endl;
            cin>>spacecraftOption;
            if(spacecraftOption>1 || spacecraftOption < 0){
                while(spacecraftOption>1 || spacecraftOption<0){
                    cout<<"\nPlease enter a valid option"<<endl;
                    cin>>spacecraftOption;
                }
            }
            cout<<"The selected option is ";
            if(spacecraftOption==0)
            {
                cout<<spacecraftOption<<".Dragon Spacecraft"<<endl;
            }else if(spacecraftOption==1)
            {
                cout<<spacecraftOption<<".CrewDragon Spacecraft"<<endl;
            }
        

            if(spacecraftOption == 0){
                spacecraft = new DragonSpacecraft();
            }
            else{
                spacecraft = new CrewDragonSpacecraft();
                int counterCrew=0;
                bool wantCrew=true;
                while(true){
                    
                    
                    if(counterCrew==0)
                    {
                        cout<<"\nAdding crew members."<<endl;
                        counterCrew++;
                    }
                        string memberName;
                        double memberWeight;
                        cout<<"\nEnter name of crew member."<<endl;
                        cin>>memberName;
                        cout<<"Enter weight of crew member"<<endl;
                        cin>>memberWeight;
                        while(memberWeight<0){
                            cout<<"Please enter valid weight"<<endl;
                            cin>>memberWeight;
                        }
                        spacecraft->enterCrewMember(new CrewMember(memberName, memberWeight));
                    
                cout<<"Do you want to enter another member? (0:no 1:yes)"<<endl;
                    cin>>wantCrew;
                    if(wantCrew == 0){
                        break;
                    }
                }
            }

            

            while(true){
                int cargoOption = 0;
                cout<<"\nNow please select the cargo to be loaded on the spacecraft.\n 0.Food Supplies\t 1.Spacecraft Equipment tools"<<endl;
                cin>>cargoOption;
                int p = 0;
                int cargoWeight =0;
                if(cargoOption > 1 || cargoOption < 0){
                    while(cargoOption>1 || cargoOption<0){
                        cout<<"Please enter a valid option"<<endl;
                        cin>>cargoOption;
                    }
                }
                cout<<"The selected option is "<<cargoOption<<endl;
                
                if(cargoOption == 0){
                    string name = "FoodSupply";
                    Cargo* cargo = new Cargo();
                    name = name + to_string(p);
                    cout<<"\nHow much does the cargo weigh?"<<endl;
                    cin>>cargoWeight;
                    if(cargoWeight<0){
                        while(cargoWeight<0){
                            cout<<"Please enter valid weight"<<endl;
                            cin>>cargoWeight;
                        }
                    }
                    spacecraft->attachCargo(new Cargo(name, cargoWeight));
                }
                else if(cargoOption == 1){
                    string name = "Equipment";
                    Cargo* cargo = new Cargo();
                    name = name + to_string(p);
                    cargo->setName(name);
                    cout<<"How much does the cargo weigh?"<<endl;
                    cin>>cargoWeight;
                    if(cargoWeight<0){
                        while(cargoWeight<0){
                            cout<<"Please enter valid weight"<<endl;
                            cin>>cargoWeight;
                        }
                    }
                    spacecraft->attachCargo(new Cargo(name, cargoWeight));
                }
                p++;
                bool doneCargo;
                cout<<"\nAre you done adding cargo? (1:yes/0:no)"<<endl;
                cin>>doneCargo;
                if(doneCargo == true){
                    break;
                }
            }

            bool parachuteOption;
            cout<<"\nPlease select the type of parachute you want to use\n0.Mark2 Parachutes\t 1.Mark3 Parachutes"<<endl;
            cin>>parachuteOption;
            if(parachuteOption == 0){
                Mark2Creator* mark2Creator; 
                for(int i=0;i<4;i++){
                    spacecraft->attachParachute(mark2Creator->createParachute("Mark2Parchute"+to_string(i)));
                }
            }
            else if(parachuteOption == 1){
                Mark3Creator* mark3Creator; 
                for(int i=0;i<4;i++){
                    spacecraft->attachParachute(mark3Creator->createParachute("Mark3Parchute"+to_string(i)));
                }
            }

            bool thrusterOption;
            int thrusterPower;
            cout<<"\nPlease select the type of thrusters you want to use\n0.Draco Thrusters\t 1.SuperDraco Thrusers"<<endl;
            cin>>thrusterOption;
            if(thrusterOption == 0){
                DracoCreator* dracoCreator;
                for(int i=0;i<16;i++){
                    spacecraft->attachThruster(dracoCreator->createThruster("Draco"+to_string(i)));
                }
            }
            else if(thrusterOption == 1){
                SuperDracoCreator* superDracoCreator; 
                for(int i=0;i<16;i++){
                    spacecraft->attachThruster(superDracoCreator->createThruster("SuperDraco"+to_string(i)));
                }
            }
            spacecraft->print();
            test(spacecraft);
            bool anotherSpacecraft;
            cout<<"Do you want to create another spacecraft (0:No 1:Yes)"<<endl;
            cin>>anotherSpacecraft;
            if(anotherSpacecraft == false){
                break;
            }
    }
    return successfulSpacecrafts;
}

vector<Spacecraft*> TestSpacecraft::getSpacecraftList(){
    return successfulSpacecrafts;
}