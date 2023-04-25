// main-2-1.cpp
#include <iostream>
#include "Fridge.h"

using namespace std;

int main() {
    // create a fridge object with default constructor
    Fridge f1;

    // print its attributes and power consumption
    cout << "Fridge 1: " << endl;
    cout << "Power rating: " << f1.get_powerRating() << " W" << endl;
    cout << "Volume: " << f1.get_volume() << " L" << endl;
    cout << "Is on: " << f1.get_isOn() << endl;
    cout << "Power consumption: " << f1.getPowerConsumption() << " W" << endl;

    // create another fridge object with power rating and volume parameters
    Fridge f2(200, 300);

    // print its attributes and power consumption
    cout << "Fridge 2: " << endl;
    cout << "Power rating: " << f2.get_powerRating() << " W" << endl;
    cout << "Volume: " << f2.get_volume() << " L" << endl;
    cout << "Is on: " << f2.get_isOn() << endl;
    cout << "Power consumption: " << f2.getPowerConsumption() << " W" << endl;

    // turn on the second fridge and print its attributes and power consumption again
    f2.turnOn();
    cout << "Fridge 2 (after turning on): " << endl;
    cout << "Power rating: " << f2.get_powerRating() << " W" << endl;
    cout << "Volume: " << f2.get_volume() << " L" << endl;
    cout << "Is on: " << f2.get_isOn() << endl;
    cout << "Power consumption:"<< f2.getPowerConsumption() << " W" << endl;
}