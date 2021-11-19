#ifndef SUPERDRACO_H
#define SUPERDRACO_H
#include "Thruster.h"
#include <string>

using namespace std;

class SuperDraco :public Thruster {
	public:
		SuperDraco();
		SuperDraco(string id);
		~SuperDraco();
		void shutDown();
		void fireUp();
};

#endif
