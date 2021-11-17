#ifndef DRACO_H
#define DRACO_H
#include <string>
#include "Thruster.h"

using namespace std;

class Draco : public Thruster {
	public:
		Draco();
		Draco(string id);
		~Draco();
		void fireUp();
		void shutDown();
};
#endif
