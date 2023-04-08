#include <iostream>
#include <ctime>

using namespace std;

class Vehicle {
private:
    time_t timeOfEntry;
    int ID;
public:
    Vehicle(int lD) {
        timeOfEntry = time(nullptr);
        ID = lD;
    }
    int getID() const {
        return ID;
    }
    virtual int getParkingDuration() const {
        return difftime(time(nullptr), timeOfEntry);
    }
};

class Car : public Vehicle {
public:
    Car(int lD) : Vehicle(lD) {}
    int getParkingDuration() const override {
        return 0.9 * Vehicle::getParkingDuration();
    }
};

class Bus : public Vehicle {
public:
    Bus(int lD) : Vehicle(lD) {}
    int getParkingDuration() const override {
        return 0.75 * Vehicle::getParkingDuration();
    }
};

class Motorbike : public Vehicle {
public:
    Motorbike(int lD) : Vehicle(lD) {}
    int getParkingDuration() const override {
        return 0.85 * Vehicle::getParkingDuration();
    }
};

class ParkingLot {
private:
    int maxCapacity;
    int count;
    Vehicle** vehicles;
public:
    ParkingLot(int capacity) : maxCapacity(capacity), count(0) {
        vehicles = new Vehicle*[maxCapacity];
    }
    ~ParkingLot() {
        for (int i = 0; i < count; i++) {
            delete vehicles[i];
        }
        delete[] vehicles;
    }
    int getCount() const {
        return count;
    }
    bool parkVehicle(Vehicle* v) {
        if (count < maxCapacity) {
            vehicles[count] = v;
            count++;
            return true;
        }
        else {
            cout << "The lot is full" << endl;
            return false;
        }
    }
    void unparkVehicle(int id) {
        for (int i = 0; i < count; i++) {
            if (vehicles[i]->getID() == id) {
                delete vehicles[i];
                vehicles[i] = vehicles[count - 1];
                count--;
                return;
            }
        }
        cout << "Vehicle not in the lot" << endl;
    }
    int countOverstayingVehicles(int maxParkingDuration) const {
        int countOverstaying = 0;
        for (int i = 0; i < count; i++) {
            if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
                countOverstaying++;
            }
        }
        return countOverstaying;
    }
};

int main() {
    ParkingLot parkingLot(10);
    int countVehicles = 0;
    while (countVehicles < 10) {
        int type;
        cout << "Enter vehicle type: (1) Car, (2) Bus, (3) Motorbike" << endl;
        cin >> type;
        if (type == 1) {
            Car* car = new Car(countVehicles);
            if (parkingLot.parkVehicle(car)) {
                countVehicles++;
            }
        }
        else if (type == 2) {
            Bus* bus = new Bus(countVehicles);
            if (parkingLot.parkVehicle(bus)) {
                countVehicles++;
            }
        }
        else if (type == 3) {
            Motorbike* motorbike = new Motorbike(countVehicles);
            if (parkingLot.parkVehicle(motorbike)) {
                countVehicles++;
            }
        }
        else 
    }
}
