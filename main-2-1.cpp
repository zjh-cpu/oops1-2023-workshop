#include "Helicopter.h"
#include <iostream>

int main() {
    Helicopter helicopter1(6000, "Apache");
    std::cout << "Name of helicopter: " << helicopter1.get_name() << std::endl;
    std::cout << "Weight of helicopter: " << helicopter1.get_weight() << std::endl;

    helicopter1.set_fuel(80);
    helicopter1.fly(30, 20);

    std::cout << "Number of flights: " << helicopter1.get_numberOfFlights() << std::endl;
    std::cout << "Remaining fuel: " << helicopter1.get_fuel() << std::endl;

    helicopter1.refuel();
    std::cout << "Fuel after refueling: " << helicopter1.get_fuel() << std::endl;

    helicopter1.set_weight(5500);
    helicopter1.fly(30, 20);

    std::cout << "Number of flights: " << helicopter1.get_numberOfFlights() << std::endl;
    std::cout << "Remaining fuel: " << helicopter1.get_fuel() << std::endl;

    return 0;
}
