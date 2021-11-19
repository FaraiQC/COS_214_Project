#include <iostream>
#include <vector>
#include "TestRockets.h"

int main() {
    TestRockets* testRockets = new TestRockets();
    testRockets->testRockets();
    


    RocketBuilderDirector builderDirector;
    FalconNineBuilder falconNineBuilder;
    builderDirector.setBuilder(&falconNineBuilder);
    builderDirector.buildFalconNine("FLCHVY01");
    cout << falconNineBuilder.getRocket()->getName() << endl;
    falconNineBuilder.getRocket()->launch();
    return 0;
}
