#include <iostream>
#include "Airplane.h"

int main() {
    Airplane ap1(40000, 250);
    std::cout << "Weight: " << ap1.get_weight() << std::endl;
    std::cout << "Fuel: " << ap1.get_fuel() << std::endl;
    std::cout << "Number of Flights: " << ap1.get_numberOfFlights() << std::endl;
    std::cout << "Passengers: " << ap1.get_numPassengers() << std::endl;
    ap1.fly(65, 120);
    std::cout << "Fuel: " << ap1.get_fuel() << std::endl;
    std::cout << "Number of Flights: " << ap1.get_numberOfFlights() << std::endl;
    ap1.reducePassengers(100);
    std::cout << "Passengers: " << ap1.get_numPassengers() << std::endl;
    return 0;
}
