#include "../include/Automobile.h"
#include "../include/DieselCar.h"
#include "../include/ElectricCar.h"
#include "../include/GasCar.h"
#include <iostream>
#include <stdexcept>

Automobile::Automobile(const std::string& make, const std::string& model, int year, int odometerReading)
    : make(make), model(model), year(year), odometerReading(odometerReading) {
    if (year < 1886) { // The first car was invented around 1886
        throw std::invalid_argument("Year cannot be before 1886");
    }
    if (odometerReading < 0) {
        throw std::invalid_argument("Odometer reading cannot be negative");
    }
}

std::string Automobile::getMake() const {
    return make;
}

std::string Automobile::getModel() const {
    return model;
}

int Automobile::getYear() const {
    return year;
}

int Automobile::getOdometerReading() const {
    return odometerReading;
}

void Automobile::setOdometerReading(int newReading) {
    if (newReading < odometerReading) {
        throw std::invalid_argument("New odometer reading cannot be less than current reading");
    }
    odometerReading = newReading;
}

void Automobile::displayInfo() const {
    std::cout << "Make: " << make << ", Model: " << model<< ", Year: " << year << ", Odometer: " << odometerReading << std::endl;
}

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

DieselCar::DieselCar(const std::string& make, const std::string& model, int year, int odometerReading, double fuelTankCapacity)
    : Automobile(make, model, year, odometerReading), fuelTankCapacity(fuelTankCapacity) {
    if (fuelTankCapacity <= 0) {
        throw std::invalid_argument("Fuel tank capacity must be positive");
    }
}

void DieselCar::displayInfo() const {
    Automobile::displayInfo();
    std::cout << "Fuel Tank Capacity: " << fuelTankCapacity << " liters" << std::endl;
}
