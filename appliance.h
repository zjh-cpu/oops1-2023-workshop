// Appliance.h
class Appliance {
private:
    int powerRating; // the power rating of the appliance in watts
    bool isOn; // whether the appliance is on or off

public:
    // default constructor
    Appliance();

    // constructor with power rating parameter
    Appliance(int powerRating);

    // getter and setter for power rating
    int get_powerRating() const;
    void set_powerRating(int powerRating);

    // getter for isOn
    bool get_isOn() const;

    // methods to turn on and off the appliance
    void turnOn();
    void turnOff();

    // virtual method to get the power consumption of the appliance
    virtual double getPowerConsumption();
};
