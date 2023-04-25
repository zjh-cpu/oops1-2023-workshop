// TV.cpp
#include "TV.h"

// default constructor
TV::TV() : Appliance() {
  screenSize = 0.0;
}

// parameterized constructor
TV::TV(int powerRating, double screenSize) : Appliance(powerRating) {
  this->screenSize = screenSize;
}

// setter for screen size
void TV::setScreenSize(double screenSize) {
  this->screenSize = screenSize;
}

// getter for screen size
double TV::getScreenSize() {
  return screenSize;
}

// inherited method from Appliance
double TV::getPowerConsumption() {
  return get_powerRating() * (screenSize / 10.0);
}