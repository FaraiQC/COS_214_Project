#ifndef FALCON_ROCKETS_VACUUMCREATOR_H
#define FALCON_ROCKETS_VACUUMCREATOR_H

#include "VacuumEngine.h"
#include "EngineFactory.h"

class VacuumCreator : public EngineFactory {
private :
public:
    VacuumCreator();

    Engine * createEngine() override;

    ~VacuumCreator() override;
};


#endif
