#include "VacuumCreator.h"

VacuumCreator::VacuumCreator() {

}

Engine *VacuumCreator::createEngine() {
    return new VacuumEngine("");
}

VacuumCreator::~VacuumCreator() {

}
