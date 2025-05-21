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

#endif // AUTOMOBILE_H
