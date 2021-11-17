#ifndef FALCON_ROCKETS_STAGE_H
#define FALCON_ROCKETS_STAGE_H

#include "Engine.h"
#include "vector"

class Stage {
private:
    string name;
    bool active;
public:
    explicit Stage(string name);

    string getName();

    virtual void deactivate();

    virtual void activate() = 0;

    virtual ~Stage();
};


#endif
