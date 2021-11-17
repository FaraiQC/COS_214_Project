#ifndef FALCON_ROCKETS_INTERSTAGE_H
#define FALCON_ROCKETS_INTERSTAGE_H

#include "Stage.h"

class InterStage : public Stage {
private:
    int numberOfGridFins;
public:
    InterStage(string name, int numberOfFins);

    void setGridFins(int);

    void separate();

    void activate() override;

    ~InterStage() override;
};


#endif
