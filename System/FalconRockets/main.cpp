#include <iostream>
#include "FalconNineBuilder.h"
#include "FalconHeavyBuilder.h"
#include "RocketBuilderDirector.h"

int main() {


    RocketBuilderDirector builderDirector;
    FalconNineBuilder falconNineBuilder;
    builderDirector.setBuilder(&falconNineBuilder);
    builderDirector.buildFalconNine("FLCHVY01");
    cout << falconNineBuilder.getRocket()->getName() << endl;
    falconNineBuilder.getRocket()->launch();
    return 0;
}
