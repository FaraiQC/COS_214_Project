#ifndef SIMULATION_H
#define SIMULATION_H

class Simulation {

private:
	vector<Satellite>;
	int Vector_Spacecrafts;
	int Vector_Falcon;
	int Vector_FinalSimulations;

public:
	Simulation();

	~Simulation();

	void testSimulation();

	void assembleRocket();

	void Launch();

	void Launch(int int_t);
};

#endif
