#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    // Create a parking lot with a capacity of 10 vehicles
    ParkingLot lot(10);

    // Park 5 Car objects, 3 Bus objects, and 2 Motorbike objects
    for (int i = 1; i <= 5; i++) {
        Car* car = new Car(i);
        lot.parkVehicle(car);
    }
    for (int i = 1; i <= 3; i++) {
        Bus* bus = new Bus(i);
        lot.parkVehicle(bus);
    }
    for (int i = 1; i <= 2; i++) {
        Motorbike* bike = new Motorbike(i);
        lot.parkVehicle(bike);
    }

    // Count the number of overstaying vehicles
    int overstayingCount = lot.countOverstayingVehicles(15);
    std::cout << "Number of overstaying vehicles: " << overstayingCount << std::endl;

    return 0;
}
