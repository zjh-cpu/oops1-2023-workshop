// main-1-1.cpp
#include <iostream>
#include "Appliance.h"

using namespace std;

int main() {
    // create an appliance object with default constructor
    Appliance a1;

    // print its attributes and power consumption
    cout << "Appliance 1: " << endl;
    cout << "Power rating: " << a1.get_powerRating() << " W" << endl;
    cout << "Is on: " << a1.get_isOn() << endl;
    cout << "Power consumption: " << a1.getPowerConsumption() << " W" << endl;

    // create another appliance object with power rating parameter
    Appliance a2(100);

    // print its attributes and power consumption
    cout << "Appliance 2: " << endl;
    cout << "Power rating: " << a2.get_powerRating() << " W" << endl;
    cout << "Is on: " << a2.get_isOn() << endl;
    cout << "Power consumption: " << a2.getPowerConsumption() << " W" << endl;

    // turn on the second appliance and print its attributes and power consumption again
    a2.turnOn();
    cout << "Appliance 2 (after turning on): " << endl;
    cout << "Power rating: " << a2.get_powerRating() << " W" << endl;
    cout << "Is on: " << a2.get_isOn() << endl;
    cout << "Power consumption: " << a2.getPowerConsumption() << " W" << endl;

    return 0;
}
