#ifndef PARACHUTECREATOR_H
#define PARACHUTECREATOR_H

class ParachuteCreator {
	public:
		ParachuteCreator();
		virtual Parachute* createParachute()=0;
};

#endif
