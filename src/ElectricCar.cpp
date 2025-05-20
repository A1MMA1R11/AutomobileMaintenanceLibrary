#include "../include/ElectricCar.h"
#include <iostream>
#include <stdexcept>

ElectricCar::ElectricCar(const std::string& make, const std::string& model, int year, int odometerReading, double batteryCapacity)
    : Automobile(make, model, year, odometerReading), batteryCapacity(batteryCapacity) {
    if (batteryCapacity <= 0) {
        throw std::invalid_argument("Battery capacity must be positive");
    }
}

void ElectricCar::displayInfo() const {
    Automobile::displayInfo();
    std::cout << "Battery Capacity: " << batteryCapacity << " kWh" << std::endl;
}
