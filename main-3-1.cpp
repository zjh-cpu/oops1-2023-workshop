#include <iostream>
#include "AirFleet.h"

using namespace std;

int main() {
    AirFleet fleet;
    AirCraft **fleet_ptr = fleet.get_fleet();

    for (int i = 0; i < 5; i++) {
        cout << "Aircraft " << i + 1 << " has weight " << fleet_ptr[i]->get_weight()
             << " and fuel " << fleet_ptr[i]->get_fuel() << endl;
    }

    return 0;
}
