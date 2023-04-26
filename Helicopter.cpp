#include "Helicopter.h"

AirCraft::AirCraft(int w, float f) : weight(w), fuel(f) {}

Helicopter::Helicopter(int w, std::string n, float f) : AirCraft(w, f), name(n) {}

Helicopter::Helicopter() {}

std::string Helicopter::get_name() const {
    return name;
}

void Helicopter::set_name(std::string n) {
    name = n;
}

void Helicopter::fly(int headwind, int minutes) {
    float fu = 0;
    if (fuel >= 40) {
    fu = 0.4 * minutes;
  } else {
    fu = 0.2 * minutes;
  }
  if (get_weight() > 5670) {
    fu += 0.01 * (get_weight() - 5670) * minutes;
  }
  if (get_fuel() - fu >= 20) {
    set_fuel(get_fuel() - fu);
    set_numberOfFlights(get_numberOfFlights() + 1);
  }
}

string Helicopter::get_name() { return name; }

void Helicopter::set_name(string n) { name = n; }
