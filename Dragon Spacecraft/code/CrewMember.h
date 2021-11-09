#ifndef CREWMEMBER_H
#define CREWMEMBER_H
#include <string>

using namespace std;

class CrewMember {

private:
	string name;
	double weight;

public:
	CrewMember();
	~CrewMember();
	void setName(string name);
	void setWeight(double weight);
	string getName();
	double getWeight();
};

#endif
