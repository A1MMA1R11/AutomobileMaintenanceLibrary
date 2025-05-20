#include <iostream>
#include <memory>
#include "include/Automobile.h"
#include "include/MaintenanceTask.h"
#include "include/MaintenanceLibrary.h"

int main() {
    try {
        // Create vehicles
        auto electricCar = std::make_shared<ElectricCar>("Tesla", "Model S", 2020, 15000, 100.0);
        auto gasCar = std::make_shared<GasCar>("Toyota", "Camry", 2018, 30000, 50.0);
        auto dieselCar = std::make_shared<DieselCar>("Ford", "F-150", 2019, 40000, 60.0);

        // Create maintenance tasks
        auto oilChange = std::make_shared<MaintenanceTask>("Oil Change", "Change engine oil", std::vector<std::string>{"gas", "diesel"});
        auto tireRotation = std::make_shared<MaintenanceTask>("Tire Rotation", "Rotate tires", std::vector<std::string>{"electric", "gas", "diesel"});
        auto batteryInspection = std::make_shared<MaintenanceTask>("Battery Inspection", "Inspect battery health", std::vector<std::string>{"electric"});

        // Create maintenance library
        MaintenanceLibrary library;

        // Add vehicles
        library.addVehicle(electricCar);
        library.addVehicle(gasCar);
        library.addVehicle(dieselCar);

        // List vehicles
        std::cout << "Vehicles in library:" << std::endl;
        library.listVehicles();

        // Add maintenance tasks
        library.addMaintenanceTask(gasCar, oilChange);
        library.addMaintenanceTask(gasCar, tireRotation);
        library.addMaintenanceTask(dieselCar, oilChange);
        library.addMaintenanceTask(dieselCar, tireRotation);
        library.addMaintenanceTask(electricCar, tireRotation);
        library.addMaintenanceTask(electricCar, batteryInspection);

        // List maintenance tasks for each vehicle
        std::cout << "\nMaintenance tasks for each vehicle:" << std::endl;
        library.listMaintenanceTasks(electricCar);
        library.listMaintenanceTasks(gasCar);
        library.listMaintenanceTasks(dieselCar);

        // Remove a maintenance task
        library.removeMaintenanceTask(gasCar, oilChange);
        std::cout << "\nAfter removing oil change from gas car:" << std::endl;
        library.listMaintenanceTasks(gasCar);

        // Remove a vehicle
        library.removeVehicle(dieselCar);
        std::cout << "\nAfter removing diesel car:" << std::endl;
        library.listVehicles();

    } catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << std::endl;
    }

    return 0;
}
