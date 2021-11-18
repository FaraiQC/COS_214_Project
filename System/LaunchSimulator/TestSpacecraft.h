#ifndef TESTSPACECRAFT_H
#define TESTSPACECRAFT_H

class TestSpacecraft {

private:
	Spacecraft* spacecraft;

public:
	TestSpacecraft();

	~TestSpacecraft();

	void BeforeLaunch();

	void Released();
};

#endif
