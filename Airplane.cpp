#include "Airplane.h"

Airplane::Airplane() : numPassengers(0) {}

Airplane::Airplane(int w, int p) : AirCraft(w), numPassengers(p) {}

void Airplane::reducePassengers(int x) {
    if (x > numPassengers) {
        numPassengers = 0;
    } else {
        numPassengers -= x;
    }
}

int Airplane::get_numPassengers() const {
    return numPassengers;
}

void Airplane::fly(int headwind, int minutes) {
    float fuelConsumptionRate;
    if (headwind >= 60) {
        fuelConsumptionRate = 0.005;
    } else {
        fuelConsumptionRate = 0.003;
    }
    fuelConsumptionRate += numPassengers * 0.00001;

    float fuelConsumed = fuelConsumptionRate * weight * minutes;

    if (fuelConsumed >= fuel * 0.8) {
        return;
    }

    fuel -= fuelConsumed;
    numberOfFlights++;
}
