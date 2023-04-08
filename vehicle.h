#include <iostream>
#include <ctime>

class Vehicle {
  private:
    std::time_t timeOfEntry;
    int id;

  public:
    Vehicle(int lD) {
      timeOfEntry = std::time(nullptr);
      id = lD;
    }

    int getID() {
      return id;
    }

    virtual int getParkingDuration() {
      std::time_t currentTime = std::time(nullptr);
      return static_cast<int>(difftime(currentTime, timeOfEntry));
    }
};

class Car : public Vehicle {
  public:
    Car(int lD) : Vehicle(lD) {}

    int getParkingDuration() override {
      int duration = Vehicle::getParkingDuration();
      return static_cast<int>(duration * 0.9);
    }
};

class Bus : public Vehicle {
  public:
    Bus(int lD) : Vehicle(lD) {}

    int getParkingDuration() override {
      int duration = Vehicle::getParkingDuration();
      return static_cast<int>(duration * 0.75);
    }
};

class Motorbike : public Vehicle {
  public:
    Motorbike(int lD) : Vehicle(lD) {}

    int getParkingDuration() override {
      int duration = Vehicle::getParkingDuration();
      return static_cast<int>(duration * 0.85);
    }
};