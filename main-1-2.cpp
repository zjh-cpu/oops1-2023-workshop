#include <iostream>
#include <ctime>
#include "vehicle.h"
#include "parkinglot.h"

using namespace std;

int main() {
    // create a parking lot with capacity of 10
    ParkingLot parkingLot(10);

    // prompt the user for the number of vehicles they want to park
    int numVehicles;
    cout << "Enter the number of vehicles to park: ";
    cin >> numVehicles;

    // park the vehicles in the parking lot
    for (int i = 0; i < numVehicles; i++) {
        int vehicleType;
        cout << "Enter the type of vehicle (1 = car, 2 = bus, 3 = motorbike): ";
        cin >> vehicleType;

        // create the vehicle object based on user input
        Vehicle* vehicle;
        int vehicleID = i + 1;
        switch (vehicleType) {
            case 1:
                vehicle = new Car(vehicleID);
                break;
            case 2:
                vehicle = new Bus(vehicleID);
                break;
            case 3:
                vehicle = new Motorbike(vehicleID);
                break;
            default:
                cout << "Invalid vehicle type. Please enter 1, 2, or 3." << endl;
                i--;
                continue;
        }

        // attempt to park the vehicle in the parking lot
        if (parkingLot.parkVehicle(vehicle)) {
            cout << "Vehicle " << vehicleID << " parked successfully." << endl;
        } else {
            cout << "The lot is full. Vehicle " << vehicleID << " cannot be parked." << endl;
            delete vehicle; // free memory since the vehicle cannot be parked
            numVehicles--; // decrement the number of vehicles since this one cannot be parked
            i--; // decrement i to re-prompt for this vehicle type
        }
    }

    // print the parking duration for each vehicle in the parking lot
    for (int i = 0; i < parkingLot.getCount(); i++) {
        Vehicle* vehicle = parkingLot.getVehicle(i);
        cout << "Vehicle " << vehicle->getID() << " parked for " << vehicle->getParkingDuration() << " seconds." << endl;
    }

    // prompt the user to remove a vehicle from the parking lot
    int vehicleID;
    cout << "Enter the ID of the vehicle to unpark: ";
    cin >> vehicleID;

    if (parkingLot.unparkVehicle(vehicleID)) {
        cout << "Vehicle " << vehicleID << " unparked successfully." << endl;
    } else {
        cout << "Vehicle " << vehicleID << " not in the lot." << endl;
    }

    return 0;
}
