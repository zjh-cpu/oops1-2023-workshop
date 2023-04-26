#include "Helicopter.h"

Helicopter::Helicopter(int w, std::string n) : AirCraft(w), name(n) {}

Helicopter::Helicopter() {}

std::string Helicopter::get_name() const {
    return name;
}

void Helicopter::set_name(std::string n) {
    name = n;
}

void Helicopter::fly(int headwind, int minutes) {
    if (fuel < 0.2) {
        std::cout << "Not enough fuel to take off" << std::endl;
        return;
    }

    float fuel_used = 0.2 * minutes;

    if (headwind >= 40) {
        fuel_used += 0.2 * minutes;
    }

    int weight_above_limit = weight - 5670;
    if (weight_above_limit > 0) {
        fuel_used += (weight_above_limit * 0.01) * minutes;
    }

    float remaining_fuel = fuel - (fuel_used / 100.0f);

    if (remaining_fuel < 0.2) {
        std::cout << "Not enough fuel to complete the flight" << std::endl;
        return;
    }

    fuel = remaining_fuel;
    numberOfFlights++;
}
