#ifndef FALCON_ROCKETS_SPACECRAFT_H
#define FALCON_ROCKETS_SPACECRAFT_H

#include "vector"
#include "Engine.h"

using namespace std;

class Spacecraft {
private:
    string id;
    vector<Engine *> dracoEngines;
    vector<Engine *> superDracoEngines;
public:
    explicit Spacecraft(string id);

    virtual void addDracoEngine(Engine *engine);

    virtual void addSuperDracoEngine(Engine *engine);

    virtual void removeDracoEngine(Engine *engine);

    virtual void removeSuperDracoEngine(Engine *engine);

    virtual ~Spacecraft();
};


#endif
