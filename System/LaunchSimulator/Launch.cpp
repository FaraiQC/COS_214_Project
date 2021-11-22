#include "Launch.h"

Launch::Launch(Simulation* receiver)
{
    this->receiver=receiver;
}

Launch::~Launch()
{
    
}

void Launch::execute()
{
    receiver->Launch();
}