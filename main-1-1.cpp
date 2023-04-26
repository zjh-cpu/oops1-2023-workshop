#include <iostream>
#include "AirCraft.h"

using namespace std;

int main() {
    AirCraft ac(100);
    cout << "Weight: " << ac.get_weight() << endl;
    cout << "Fuel: " << ac.get_fuel() << endl;
    cout << "Number of Flights: " << ac.get_numberOfFlights() << endl;

    ac.fly(20, 10);
    cout << "Number of Flights after flying: " << ac.get_numberOfFlights() << endl;

    ac.refuel();
    cout << "Fuel after refueling: " << ac.get_fuel() << endl;

    ac.set_weight(200);
    cout << "Weight after setting: " << ac.get_weight() << endl;

    ac.set_fuel(50);
    cout << "Fuel after setting: " << ac.get_fuel() << endl;

    ac.set_numberOfFlights(5);
    cout << "Number of Flights after setting: " << ac.get_numberOfFlights() << endl;

    return 0;
}
