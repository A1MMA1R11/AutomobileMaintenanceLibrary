#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "Automobile.h"

class ElectricCar : public Automobile {
private:
    double batteryCapacity;

public:
    ElectricCar(const std::string& make, const std::string& model, int year, int odometerReading, double batteryCapacity);
    void displayInfo() const override;
};

#endif // ELECTRICCAR_H
