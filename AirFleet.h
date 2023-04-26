#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirCraft.h"
#include "Helicopter.h"
#include "Airplane.h"

class AirFleet {
public:
    AirFleet();
    AirCraft **get_fleet();

private:
    AirCraft *fleet[5];
};

#endif
