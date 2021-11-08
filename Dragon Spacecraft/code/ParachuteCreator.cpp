#include "ParachuteCreator.h"


ParachuteCreator::ParachuteCreator(){
	cout<<"Ready to create Parachutes."<<endl;
}
Parachute* ParachuteCreator::createParachute() {
	return new Parachute();
}
