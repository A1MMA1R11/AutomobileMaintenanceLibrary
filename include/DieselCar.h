#ifndef DIESELCAR_H
#define DIESELCAR_H

#include "Automobile.h"

class DieselCar : public Automobile {
private:
    double fuelTankCapacity;

public:
    DieselCar(const std::string& make, const std::string& model, int year, int odometerReading, double fuelTankCapacity);
    void displayInfo() const override;
};

#endif // DIESELCAR_H
