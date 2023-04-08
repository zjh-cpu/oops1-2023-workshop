#include <iostream>
#include <ctime>
#include <cstdlib>
#include "vehicle.h"
#include "parkinglot.h"

int main() {
    srand(time(NULL));

    ParkingLot lot(10);

    while (lot.getCount() < 10) {
        std::cout << "Enter type of vehicle to park (car/bus/motorbike): ";
        std::string type;
        std::cin >> type;

        if (type == "car") {
            Car* car = new Car(rand() % 10000);
            lot.parkVehicle(car);
        } else if (type == "bus") {
            Bus* bus = new Bus(rand() % 10000);
            lot.parkVehicle(bus);
        } else if (type == "motorbike") {
            Motorbike* motorbike = new Motorbike(rand() % 10000);
            lot.parkVehicle(motorbike);
        } else {
            std::cout << "Invalid vehicle type" << std::endl;
        }
    }

    std::cout << "Enter ID of vehicle to unpark: ";
    int id;
    std::cin >> id;

    lot.unparkVehicle(id);

    return 0;
}
