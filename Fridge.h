// Fridge.h
#include "Appliance.h"

class Fridge : public Appliance {
private:
    double volume; // volume in litres

public:
    // default constructor
    Fridge();

    // constructor with power rating and volume parameters
    Fridge(int powerRating, double volume);

    // getter and setter for volume
    double get_volume() const;
    void set_volume(double volume);

    // overridden method to get the power consumption of the fridge
    double getPowerConsumption() override;
};
