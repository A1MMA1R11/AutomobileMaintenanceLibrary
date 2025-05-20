#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H

#include <string>
#include <iostream>

class Automobile {
protected:
    std::string make;
    std::string model;
    int year;
    int odometerReading;

public:
    Automobile(const std::string& make, const std::string& model, int year, int odometerReading);
    virtual ~Automobile() = default;

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    int getOdometerReading() const;
    void setOdometerReading(int newReading);

    virtual void displayInfo() const;
};

class ElectricCar : public Automobile {
private:
    double batteryCapacity;

public:
    ElectricCar(const std::string& make, const std::string& model, int year, int odometerReading, double batteryCapacity);
    void displayInfo() const override;
};

class GasCar : public Automobile {
private:
    double fuelTankCapacity;

public:
    GasCar(const std::string& make, const std::string& model, int year, int odometerReading, double fuelTankCapacity);
    void displayInfo() const override;
};

class DieselCar : public Automobile {
private:
    double fuelTankCapacity;

public:
    DieselCar(const std::string& make, const std::string& model, int year, int odometerReading, double fuelTankCapacity);
    void displayInfo() const override;
};

#endif // AUTOMOBILE_H
