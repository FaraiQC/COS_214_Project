#include "TestSpacecraft.h"
#include "sstream"

/**
 * @brief Construct a new Test Spacecraft:: Test Spacecraft object
 * 
 */
TestSpacecraft::TestSpacecraft(){

}

/**
 * @brief Destroy the Test Spacecraft:: Test Spacecraft object
 * 
 */
TestSpacecraft::~TestSpacecraft(){

}

/**
 * @brief tweaks the spacecraft
 * 
 * @param spacecraft 
 */
void TestSpacecraft::tweakSpacecraft(Spacecraft* spacecraft){
    cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tTweaking Spacecraft Configurations"<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;

    int retweakOption;
    if(spacecraft->isCrewDragon()){
        cout<<"What would you like to tweak?\n 0. Crew Members\t 1. Cargo\t 2. Thrusters\t 3. Parachutes"<<endl;
        string strInput = "";
        while (true) 
        {   getline(cin, strInput);
            stringstream myStream(strInput);
            if ( (myStream >> retweakOption) ){
                    if(retweakOption >=0 && retweakOption<=3){
                        break;
                    }else
                        cout << "Invalid input, please try again" << endl;
                }
               
           
        }
    }
    else{
        cout<<"What would you like to tweak?\n 1. Cargo\t 2. Thrusters\t 3. Parachutes"<<endl;
        string strInput = "";
        while (true) 
        {   getline(cin, strInput);
            stringstream myStream(strInput);
            if ( (myStream >> retweakOption) ){
                    if(retweakOption >=1 && retweakOption<=3){
                        break;
                    }else
                        cout << "Invalid input, please try again" << endl;
                }
                
           
        }
    }
    
    if(retweakOption == 0){
        int cMembertweakOption;
        cout<<"What do you want to do with Crew Members?\n 0.Add new member(s)\t 1.Remove member(s)"<<endl;
        string strInput = "";
        while (true) 
        {   getline(cin, strInput);
            stringstream myStream(strInput);
            if ( (myStream >> cMembertweakOption) ){
                    if(cMembertweakOption >=0 && cMembertweakOption<=1){
                        break;
                    }else
                        cout << "Invalid input, please try again" << endl;
               }
                
           
        }
        if(cMembertweakOption == 0){
            spacecraft = new CrewDragonSpacecraft();
            int counterCrew=0;
            int wantCrew=1;
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
                string strInput = "";
                while (true) 
                {   getline(cin, strInput);
                    stringstream myStream(strInput);
                    if ( (myStream >> memberWeight) ){
                        if(memberWeight>0)
                            break;
                        else
                             cout << "Invalid input, please try again" << endl;

                    }
                    
                
                }
                spacecraft->enterCrewMember(new CrewMember(memberName, memberWeight));
                
                cout<<"Do you want to enter another member? (0:no 1:yes)"<<endl;
                strInput = "";
                while (true) 
                {   getline(cin, strInput);
                    stringstream myStream(strInput);
                    if ( (myStream >> wantCrew) ){
                            if(wantCrew >=0 && wantCrew<=1){
                                break;
                            }else
                                cout << "Invalid input, please try again" << endl;
                    }
                        
                
                }
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
            string strInput = "";
            while (true) 
            {   getline(cin, strInput);
                stringstream myStream(strInput);
                if ((myStream >> memberIndex)){
                        if(memberIndex >=0 && memberIndex<=spacecraft->getCrewList().size()-1){
                            break;
                        }else
                            cout << "Invalid input, please try again" << endl;
                }
               
            
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
                cout<<"\nNow please select the cargo (index) to be loaded on the spacecraft.\n 0.Food Supplies\t 1.Spacecraft Equipment tools"<<endl;
                int p = spacecraft->getCargoList().size();
                int cargoWeight =0;
                string strInput = "";
                while (true) 
                {   getline(cin, strInput);
                    stringstream myStream(strInput);
                    if ( (myStream >> cargoOption) ){
                            if(cargoOption >=0 && cargoOption<=1){
                                break;
                            }else
                                cout << "Invalid input, please try again" << endl;
                    }
                
                }
                cout<<"The selected option is "<<cargoOption<<endl;
                
                if(cargoOption == 0){
                    string name = "FoodSupply";
                    Cargo* cargo = new Cargo();
                    name = name + to_string(p);
                    cout<<"\nHow much does the cargo weigh?"<<endl;
                    strInput = "";
                    while (true) 
                    {   getline(cin, strInput);
                        stringstream myStream(strInput);
                        if ( (myStream >> cargoWeight) ){
                                if(cargoWeight>0){
                                    break;
                                }else
                                    cout << "Invalid input, please try again" << endl;
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
                    strInput = "";
                    while (true) 
                    {   getline(cin, strInput);
                        stringstream myStream(strInput);
                        if ( (myStream >> cargoWeight) ){
                                if(cargoWeight>0){
                                    break;
                                }else
                                    cout << "Invalid input, please try again" << endl;
                        }
                    
                    }
                    spacecraft->attachCargo(new Cargo(name, cargoWeight));
                }
                p++;
                int doneCargo;
                cout<<"\nAre you done adding cargo? (1:yes/0:no)"<<endl;
                strInput = "";
                while (true) 
                {   getline(cin, strInput);
                    stringstream myStream(strInput);
                    if ( (myStream >> doneCargo) ){
                            if(doneCargo >=0 && doneCargo<=1){
                                break;
                            }else
                                cout << "Invalid input, please try again" << endl;
                    }
                      
                
                }
                if(doneCargo == 1){
                    break;
                }
            }
        }
        else{
            while(true){
                cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
                cout<<"\t\t\tCargo Information:"<<endl;
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
                 string strInput = "";
                while (true) 
                {   getline(cin, strInput);
                    stringstream myStream(strInput);
                    if ( (myStream >> cCargoIndex) ){
                            if(cCargoIndex >=0 && cCargoIndex<=spacecraft->getCargoList().size()-1){
                                break;
                            }else
                                cout << "Invalid input, please try again" << endl;
                    }
                     
                
                }
                spacecraft->detachCargo(cCargoIndex);
                int doneRCargo;
                cout<<"Do you want to remove another cargo load? (0:No 1:Yes)"<<endl;
                strInput = "";
                while (true) 
                {   getline(cin, strInput);
                    stringstream myStream(strInput);
                    if ( (myStream >> doneRCargo) ){
                            if(doneRCargo >=0 && doneRCargo<=1){
                                break;
                            }else
                                cout << "Invalid input, please try again" << endl;
                    }
                      
                
                }
                if(doneRCargo==0){
                    break;
                }
            }
        }
    } 
    else if(retweakOption == 2){
        int thrusterOptionR;
        cout<<"Would you like to change your thrusters? (0:No 1:Yes)"<<endl;
        string strInput = "";
                while (true) 
                {   getline(cin, strInput);
                    stringstream myStream(strInput);
                    if ( (myStream >> thrusterOptionR) ){
                            if(thrusterOptionR >=0 && thrusterOptionR<=1){
                                break;
                            }else
                                cout << "Invalid input, please try again" << endl;
                    }
                        
                }
        if(thrusterOptionR == 1){
            int thrusterOption;
            int thrusterPower;
            cout<<"\nPlease select the type of thrusters you want to use\n0.Draco Thrusters\t 1.SuperDraco Thrusers"<<endl;
             strInput = "";
                while (true) 
                {   getline(cin, strInput);
                    stringstream myStream(strInput);
                    if ( (myStream >> thrusterOption) ){
                            if(thrusterOption >=0 && thrusterOption<=1){
                                break;
                            }else
                                cout << "Invalid input, please try again" << endl;
                    }
                
                }
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
        int parachuteOptionR;
        cout<<"Would you like to change your Parachute? (0:No 1:Yes)"<<endl;
        string strInput = "";
                while (true) 
                {   getline(cin, strInput);
                    stringstream myStream(strInput);
                    if ( (myStream >> parachuteOptionR) ){
                            if(parachuteOptionR >=0 && parachuteOptionR<=1){
                                break;
                            }else
                                cout << "Invalid input, please try again" << endl;
                    }
                       
                
                }
        if(parachuteOptionR == true){
            int parachuteOption;
            cout<<"\nPlease select the type of parachute you want to use\n0.Mark2 Parachutes\t 1.Mark3 Parachutes"<<endl;
             strInput = "";
                while (true) 
                {   getline(cin, strInput);
                    stringstream myStream(strInput);
                    if ( (myStream >> parachuteOption) ){
                            if(parachuteOption >=0 && parachuteOption<=1){
                                break;
                            }else
                                cout << "Invalid input, please try again" << endl;
                    }
                       
                
                }
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
   
//@brief Test if the spacecraft is in Optimum, by calling the IsSpcacecraftInOptimum function if all the Optimum conditions are met the IsSpcacecraftInOptimum funtions returns true
//@brief if the IsSpcacecraftInOptimum function returns true, the spacecraft calls the uloading function which will ask the user what is going to be unloaded when the spacecraft gets to its destination
//@brief if the IsSpcacecraftInOptimum function returns false, the tweakSpacecraft funtion is called
//@param spacecraft is the spacecraft object that needs to be tweaked or pushed back to successfulSpacecrafts
void TestSpacecraft::test(Spacecraft* spacecraft){
    bool isOptimum=spacecraft->IsSpcacecraftInOptimum();
    if(isOptimum == true){
        cout<<"What would you like to unload when you get to your destination."<<endl;
        spacecraft->Unloading();
        cout<<"Spacecraft added to the list of working spacecrafts!!"<<endl;
        successfulSpacecrafts.push_back(spacecraft);
    }
    else{
        tweakSpacecraft(spacecraft);
    }
}

//@brief Building/Testing Spacecraft Configurations, A user is asked to choose a spacecraft between a Dragon and CrewDragon Spacecraft
//@brief A user in then asked which configurations does the user wants for that specific spacecraft, then a test function will be called to check if those configurations are suitable for that spacecraft 
//@brief if those configurations are suitable for that spacecraft, the spacecraft will be added to successfulSpacecrafts, else the spacecraft configurations will have to be tweaked until the spacefraft is in optimum
//@return spacecraft that are in Optimum
vector<Spacecraft*> TestSpacecraft::initSpacecraft(){
    while(true){
        int spacecraftOption = 0;
            Spacecraft* spacecraft = NULL;
            cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"\t\t\tBuilding/Testing Spacecraft Configurations"<<endl;
            cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
           
          

            cout<<"\nWhich type of Spacecraft do you want to use?"<<endl;
            cout<<"0.Dragon Spacecraft \t 1.CrewDragon Spacecraft"<<endl;
            string strInput = "";
            while (true){
                getline(cin, strInput);
                 stringstream myStream(strInput);
                if ( (myStream >> spacecraftOption) ){
                        if(spacecraftOption >=0 && spacecraftOption <=1){
                            break;
                        } else
                            cout << "Invalid input, please try again" << endl;
                    }
            }           

                
            cout<<"The selected  is Spacecraft:";
            if(spacecraftOption==0)
            {
                cout<<" Dragon Spacecraft"<<endl;
            }else if(spacecraftOption==1)
            {
                cout<<" CrewDragon Spacecraft"<<endl;
            }
        

            if(spacecraftOption == 0){
                spacecraft = new DragonSpacecraft();
            }
            else{
                spacecraft = new CrewDragonSpacecraft();
                int counterCrew=0;
                int wantCrew=1;
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
                         string strInput = "";
                        while (true){
                            getline(cin, strInput);
                            stringstream myStream(strInput);
                            if ( (myStream >> memberWeight) ){
                                    if(memberWeight >0 ){
                                        break;
                                    }
                                    else
                                       {cout << "Invalid input, please try again" << endl;}
                                }
                                
                        }   
                        spacecraft->enterCrewMember(new CrewMember(memberName, memberWeight));
                    
                cout<<"Do you want to enter another member? (0:no 1:yes)"<<endl;
                   strInput = "";
                        while (true){
                            getline(cin, strInput);
                            stringstream myStream(strInput);
                            if ( (myStream >> wantCrew) ){
                                    if(wantCrew >=0 &&wantCrew<=1 ){
                                        break;
                                    }else
                                        cout << "Invalid input, please try again" << endl;
                                }
                                
                        }   
                    if(wantCrew == 0){
                        break;
                    }
                }
            }

            

            while(true){
                int cargoOption = 0;
                cout<<"\nNow please select the cargo to be loaded on the spacecraft.\n 0.Food Supplies\t 1.Spacecraft Equipment tools"<<endl;
                int p = 0;
                int cargoWeight =0;
                strInput = "";
                        while (true){
                            getline(cin, strInput);
                            stringstream myStream(strInput);
                            if ( (myStream >> cargoOption) ){
                                    if(cargoOption >=0 && cargoOption<=1 ){
                                        break;
                                    }
                                    else
                                        cout << "Invalid input, please try again" << endl;
                                }
                               
                        }   
                
                if(cargoOption == 0){
                    string name = "FoodSupply";
                    Cargo* cargo = new Cargo();
                    name = name + to_string(p);
                    cout<<"\nHow much does the cargo weigh?"<<endl;
                   strInput = "";
                        while (true){
                            getline(cin, strInput);
                            stringstream myStream(strInput);
                            if ( (myStream >> cargoWeight) ){
                                    if(cargoWeight >0 ){
                                        break;
                                    }
                                    else
                                        cout << "Invalid input, please try again" << endl;
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
                     strInput = "";
                        while (true){
                            getline(cin, strInput);
                            stringstream myStream(strInput);
                            if ( (myStream >> cargoWeight) ){
                                    if(cargoWeight >0 ){
                                        break;
                                    }
                                    else
                                        cout << "Invalid input, please try again" << endl;  
                                }
                                
                        }   
                    spacecraft->attachCargo(new Cargo(name, cargoWeight));
                }
                p++;
                int doneCargo;
                cout<<"\nAre you done adding cargo? (1:yes/0:no)"<<endl;
                strInput = "";
                        while (true){
                            getline(cin, strInput);
                            stringstream myStream(strInput);
                            if ( (myStream >> doneCargo) ){
                                    if(doneCargo >=0 && doneCargo<=1 ){
                                        break;
                                    }
                                    else
                                        cout << "Invalid input, please try again" << endl;
                                }
                                
                        }  
                if(doneCargo == 1){
                    break;
                }
            }

            int parachuteOption;
            cout<<"\nPlease select the type of parachute you want to use\n0.Mark2 Parachutes\t 1.Mark3 Parachutes"<<endl;
            strInput = "";
                        while (true){
                            getline(cin, strInput);
                            stringstream myStream(strInput);
                            if ( (myStream >> parachuteOption) ){
                                    if(parachuteOption >=0 && parachuteOption<=1 ){
                                        break;
                                    }
                                    else
                                        cout << "Invalid input, please try again" << endl;      
                                }
                                
                                  
                        }  
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

            int thrusterOption;
            int thrusterPower;
            cout<<"\nPlease select the type of thrusters you want to use\n0.Draco Thrusters\t 1.SuperDraco Thrusers"<<endl;
             strInput = "";
                        while (true){
                            getline(cin, strInput);
                            stringstream myStream(strInput);
                            if ( (myStream >> thrusterOption) ){
                                    if(thrusterOption >=0 && thrusterOption<=1 ){
                                        break;
                                    }
                                    else
                                        cout << "Invalid input, please try again" << endl;
                                }
                               
                        }  
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
            int anotherSpacecraft;
            cout<<"Do you want to create another spacecraft (0:No 1:Yes)"<<endl;
             strInput = "";
                        while (true){
                            getline(cin, strInput);
                            stringstream myStream(strInput);
                            if ( (myStream >> anotherSpacecraft) ){
                                    if(anotherSpacecraft >=0 && anotherSpacecraft<=1 ){
                                        break;
                                    }
                                    else
                                        cout << "Invalid input, please try again" << endl;
                                }
                                
                        }  
            if(anotherSpacecraft == 0){
                break;
            }
    }
    return successfulSpacecrafts;
}

//@brief carries spacecrafts that are in Optimum
//@return spacecraft that are in Optimum
vector<Spacecraft*> TestSpacecraft::getSpacecraftList(){
    return successfulSpacecrafts;
}
