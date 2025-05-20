#ifndef GASCAR_H
#define GASCAR_H

#include "Automobile.h"

class GasCar : public Automobile {
private:
    double fuelTankCapacity;

public:
    GasCar(const std::string& make, const std::string& model, int year, int odometerReading, double fuelTankCapacity);
    void displayInfo() const override;
};

#endif // GASCAR_H
