// main-2-2.cpp
#include <iostream>
#include "TV.h"

using namespace std;

int main() {
  // create a TV object using the default constructor
  TV tv1;
  cout << "TV1: power rating = " << tv1.get_powerRating() << ", screen size = " << tv1.getScreenSize() << ", power consumption = " << tv1.getPowerConsumption() << endl;

  // create a TV object using the parameterized constructor
  TV tv2(100, 50.0);
  cout << "TV2: power rating = " << tv2.get_powerRating() << ", screen size = " << tv2.getScreenSize() << ", power consumption = " << tv2.getPowerConsumption() << endl;

  // change the screen size of tv1 using the setter method
  tv1.setScreenSize(32.0);
  cout << "TV1: power rating = " << tv1.get_powerRating() << ", screen size = " << tv1.getScreenSize() << ", power consumption = " << tv1.getPowerConsumption() << endl;

  return 0;
}