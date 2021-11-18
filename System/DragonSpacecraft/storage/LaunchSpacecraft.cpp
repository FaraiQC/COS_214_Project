#include "LaunchSpacecraft.h"


LaunchSpacecraft::LaunchSpacecraft(Spacecraft* spacecraft){
    this->spacecraft=spacecraft;
}

void LaunchSpacecraft::launch(){
    // cout<<"Please select the destination of the Spacecraft"<<endl;
	// string dest;
	// cin>>dest;
	// setDestination(dest);
	// cout<<"The destination is set from "<<getCurrentLocation()<<"to "<<dest<<endl;
	// cout<<"Preparing to turn the thrusters on...."<<endl;
	// for(Thruster* item: thrustersList){
	// 	item->turnOn();
	// 	cout<<item->getId()<<" is turned on"<<endl;
	// 	sleep(1);
	// }
	// cout<<"All the thrusters have been turned on...Ready to go to "<<getDestination();

	// for(Thruster* item: thrustersList){
	// 	item->turnOn();
	// 	item->fireUp();
	// }

	// goToDestination();
	// double w = 0;
	// int i=0;
	// cout<<"Now unloading cargo and some members(N.B Overall weight has to be < 800KG)"<<endl;
	// while(getCurrentWeight()){
	// 	cout<<"What do you want to unload? \n 0:Cargo\t 1:Crew Member"<<endl;
	// 	bool optionR;
	// 	cin>>optionR;
	// 	if(optionR== 0){
	// 		cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	// 		cout<<"\t\t\tCargo Information:"<<endl;
	// 		cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	// 		double w = 0;
	// 		int i=0;
	// 		for(CrewMember* item: getCrewList()){
	// 			w += item->getWeight();
	// 		}

	// 		for(Cargo* item: getCargoList()){
	// 			cout<<i<<". "<<item->getName()<<" weight: "<<item->getWeight()<<" Kg"<<endl;
	// 			w += item->getWeight();
	// 			i++;
	// 		}
	// 		cout<<endl;
	// 		cout<<"Total spacecraft weight is: "<<w<<endl;
	// 		cout<<endl;
			
	// 		int cCargoIndex;
	// 		cout<<"Please enter the ID of the cargo you want to remove"<<endl;
	// 		cin>>cCargoIndex;
	// 		while(cCargoIndex<0 ||cCargoIndex>getCargoList().size()){
	// 			cout<<"Please enter valid index"<<endl;
	// 			cin>>cCargoIndex;
	// 		}
	// 		detachCargo(cCargoIndex);
	// 		bool doneRCargo;
	// 		cout<<"Do you want to remove another cargo load? (0:No 1:Yes)"<<endl;
	// 		cin >>doneRCargo;
	// 		if(doneRCargo==0){
	// 			break;
	// 		}
	// 	}
	// 	else{
	// 		cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	// 		cout<<"\t\t\tCrew Information:"<<endl;
	// 		cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
	// 		int i=0;
	// 		double w=0;
	// 		for(CrewMember* item: getCrewList()){
	// 			cout<<i<<". "<<item->getName()<<" weight: "<<item->getWeight()<<" Kg"<<endl;
	// 			w += item->getWeight();
	// 		}

	// 		for(Cargo* item: getCargoList()){
	// 			w += item->getWeight();
	// 			i++;
	// 		}
	// 		cout<<endl;
	// 		cout<<"Total spacecraft weight is: "<<w<<endl;
	// 		cout<<endl;

	// 		int memberIndex;
	// 		crewInfo();
	// 		cout<<"Please select the index of the member you want to remove"<<endl;
	// 		cin>>memberIndex;
	// 		while(memberIndex<0 || memberIndex>getCrewList().size()){
	// 			cin>>memberIndex;
	// 		}
	// 		removeCrewMember(memberIndex);
	// 		crewInfo();	
	// 	}
	// 	cout<<"Are you done unloading (0:No 1:Yes)"<<endl;
	// 	bool yes;
	// 	cin>>yes;
	// 	if(yes == true){
	// 		if(getCurrentWeight()>800){
	// 			cout<<"Please remove more weight"<<endl;
	// 		}
	// 		else{
	// 			break;
	// 		}
	// 	}
	// }	

	// setDestination("Earth");
	// cout<<"The destination is set from "<<getCurrentLocation()<<"to Earth"<<endl;
	// cout<<"Preparing to turn the thrusters on...."<<endl;
	// for(Thruster* item: thrustersList){
	// 	item->turnOn();
	// 	cout<<item->getId()<<" is turned on"<<endl;
	// 	sleep(1);
	// }
	// cout<<"All the thrusters have been turned on...Ready to go to "<<getDestination();

	// for(Thruster* item: thrustersList){
	// 	item->turnOn();
	// 	item->fireUp();
	// }

	// goToDestination();
	// cout<<"Now entering Earth's atmosphere preparing to deploy parachute..."<<endl;
	// if(parachuteChecker==0 ) {//IF 0 is Mark 3... then pass
	// 	int Thecurrent_Hight=160;
	// 	Mark3ParachuteSystemObserver * obsever=new Mark3ParachuteSystemObserver(this);	
	// 	for(int i=0;i<5;i++){
	// 		setCurrentHeight(Thecurrent_Hight);
	// 		obsever->update();
	// 		obsever->print();
	// 		Thecurrent_Hight -=30;


	// 	}
	// }
	// else if(parachuteChecker==1)
	// {
	// 	int Thecurrent_Hight=160;
	// 	Mark2ParachuteSystemObserver * obsever=new Mark2ParachuteSystemObserver(this);	
	// 	for(int i=0;i<5;i++){
	// 		setCurrentHeight(Thecurrent_Hight);
	// 		obsever->update();
	// 		obsever->print();
	// 		Thecurrent_Hight -=30;


	// 	}
	// }
	
}