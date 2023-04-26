#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "AirCraft.h"

class Airplane : public AirCraft {
public:
    Airplane();
    Airplane(int w, int p);

    void reducePassengers(int x);
    int get_numPassengers() const;
    void fly(int headwind, int minutes) override;

private:
    int numPassengers;
};

#endif // AIRPLANE_H
