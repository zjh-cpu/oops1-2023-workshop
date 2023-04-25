// TV.h
#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance {
private:
  double screenSize; // screen size in inches
public:
  TV(); // default constructor
  TV(int powerRating, double screenSize); // parameterized constructor
  void setScreenSize(double screenSize); // setter for screen size
  double getScreenSize(); // getter for screen size
  double getPowerConsumption(); // inherited method from Appliance
};

#endif