#include "../include/GasCar.h"
#include <iostream>
#include <stdexcept>

GasCar::GasCar(const std::string& make, const std::string& model, int year, int odometerReading, double fuelTankCapacity)
    : Automobile(make, model, year, odometerReading), fuelTankCapacity(fuelTankCapacity) {
    if (fuelTankCapacity <= 0) {
        throw std::invalid_argument("Fuel tank capacity must be positive");
    }
}

void GasCar::displayInfo() const {
    Automobile::displayInfo();
    std::cout << "Fuel Tank Capacity: " << fuelTankCapacity << " liters" << std::endl;
}
