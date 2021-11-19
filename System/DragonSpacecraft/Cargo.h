#ifndef CARGO_H
#define CARGO_H
#include <string>

using namespace std;

class Cargo {
	private:
		string description;
		double weight;
		string nameOfCargo;

	public:
		Cargo();
		Cargo(string nameOfCargo, double weight);
		~Cargo();
		string getDescription();
		string getName();
		void setDescription(string Name);
		void setName(string name);
		void setWeight(double weight);
		double getWeight();
};

#endif
