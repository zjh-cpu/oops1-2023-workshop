// Appliance.cpp
#include "Appliance.h"

// default constructor
Appliance::Appliance() {
    powerRating = 0;
    isOn = false;
}

// constructor with power rating parameter
Appliance::Appliance(int powerRating) {
    this->powerRating = powerRating;
    isOn = false;
}

// getter and setter for power rating
int Appliance::get_powerRating() const {
    return powerRating;
}

void Appliance::set_powerRating(int powerRating) {
    this->powerRating = powerRating;
}

// getter for isOn
bool Appliance::get_isOn() const {
    return isOn;
}

// methods to turn on and off the appliance
void Appliance::turnOn() {
    isOn = true;
}

void Appliance::turnOff() {
    isOn = false;
}

// virtual method to get the power consumption of the appliance
double Appliance::getPowerConsumption() {
    return 0.0;
}
