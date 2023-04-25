// Fridge.cpp
#include "Fridge.h"

// default constructor
Fridge::Fridge() : Appliance() {
    volume = 0.0;
}

// constructor with power rating and volume parameters
Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating) {
    this->volume = volume;
}

// getter and setter for volume
double Fridge::get_volume() const {
    return volume;
}

void Fridge::set_volume(double volume) {
    this->volume = volume;
}

// overridden method to get the power consumption of the fridge
double Fridge::getPowerConsumption() {
    if (get_isOn()) {
        // power consumption = power rating * 24 * (volume / 100)
        return get_powerRating() * 24 * (volume / 100);
    }
    else {
        return 0.0;
    }
}
