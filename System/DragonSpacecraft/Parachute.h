#ifndef PARACHUTE_H
#define PARACHUTE_H
#include <string>

using namespace std;

class Parachute {
	private:
		int stoppingPower;
		string id;
		int check;
	public:
		Parachute();
		Parachute(string);
		virtual void deploy()=0;
		void setStoppingPower(int stoppingPower);
		int getStoppingPower();
		void setId(string);
		string getId();
		 void SetMark2isCreatedChecker(int chech);
		 int GetMark2isCreatedChecker();
};

#endif
