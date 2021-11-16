#ifndef FALCON_ROCKETS_MERLINCREATOR_H
#define FALCON_ROCKETS_MERLINCREATOR_H
#include "EngineFactory.h"
#include "MerlinCore.h"
class MerlinCreator : public EngineFactory {
private:
public:
    MerlinCreator();

    Engine * createEngine() override;

    ~MerlinCreator() override;
};


#endif
