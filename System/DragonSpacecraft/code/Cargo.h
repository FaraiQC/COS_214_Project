#ifndef CARGO_H
#define CARGO_H
// #include "Spaceraft.h"
#include <string>

using namespace std;

class Cargo {

private:
	string description;
	double weight;
	string nameOfCargo;

public:
	Cargo();
	~Cargo();
	string getDescription();
	string getName();
	void setDescription(string Name);
	void setName(string name);
	void setWeight(double);
	double getWeight();
};

#endif
