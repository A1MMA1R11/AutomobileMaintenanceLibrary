#include <iostream>
#include <memory>
#include "include/Automobile.h"
#include "include/MaintenanceTask.h"
#include "include/MaintenanceLibrary.h"
#include "include/DieselCar.h"
#include "include/GasCar.h"
#include "include/ElectricCar.h"

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

        // Additional maintenance tasks
        auto brakeInspection = std::make_shared<MaintenanceTask>("Brake Inspection", "Ensure the braking system is functioning properly", std::vector<std::string>{"electric", "gas", "diesel"});
        auto airFilterReplacement = std::make_shared<MaintenanceTask>("Air Filter Replacement", "Maintain engine efficiency by replacing air filter", std::vector<std::string>{"gas", "diesel"});
        auto coolantFlush = std::make_shared<MaintenanceTask>("Coolant Flush", "Prevent overheating by flushing coolant", std::vector<std::string>{"gas", "diesel"});
        auto transmissionFluidChange = std::make_shared<MaintenanceTask>("Transmission Fluid Change", "Maintain smooth gear shifting by changing transmission fluid", std::vector<std::string>{"gas", "diesel"});
        auto wheelAlignment = std::make_shared<MaintenanceTask>("Wheel Alignment", "Ensure proper tire wear and handling", std::vector<std::string>{"electric", "gas", "diesel"});
        auto sparkPlugReplacement = std::make_shared<MaintenanceTask>("Spark Plug Replacement", "Maintain engine performance by replacing spark plugs", std::vector<std::string>{"gas", "diesel"});
        auto chargingSystemCheck = std::make_shared<MaintenanceTask>("Charging System Check", "Ensure battery and charging system are functioning correctly", std::vector<std::string>{"electric"});
        auto exhaustSystemInspection = std::make_shared<MaintenanceTask>("Exhaust System Inspection", "Check for leaks or emissions issues", std::vector<std::string>{"gas", "diesel"});
        auto softwareUpdates = std::make_shared<MaintenanceTask>("Software Updates", "Ensure latest firmware and features are installed", std::vector<std::string>{"electric"});
        auto fuelSystemCleaning = std::make_shared<MaintenanceTask>("Fuel System Cleaning", "Maintain fuel efficiency and engine performance", std::vector<std::string>{"gas", "diesel"});

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

        // Add new maintenance tasks to vehicles
        // Brake Inspection (all)
        library.addMaintenanceTask(electricCar, brakeInspection);
        library.addMaintenanceTask(gasCar, brakeInspection);
        library.addMaintenanceTask(dieselCar, brakeInspection);

        // Air Filter Replacement (gas, diesel)
        library.addMaintenanceTask(gasCar, airFilterReplacement);
        library.addMaintenanceTask(dieselCar, airFilterReplacement);

        // Coolant Flush (gas, diesel)
        library.addMaintenanceTask(gasCar, coolantFlush);
        library.addMaintenanceTask(dieselCar, coolantFlush);

        // Transmission Fluid Change (gas, diesel)
        library.addMaintenanceTask(gasCar, transmissionFluidChange);
        library.addMaintenanceTask(dieselCar, transmissionFluidChange);

        // Wheel Alignment (all)
        library.addMaintenanceTask(electricCar, wheelAlignment);
        library.addMaintenanceTask(gasCar, wheelAlignment);
        library.addMaintenanceTask(dieselCar, wheelAlignment);

        // Spark Plug Replacement (gas, diesel)
        library.addMaintenanceTask(gasCar, sparkPlugReplacement);
        library.addMaintenanceTask(dieselCar, sparkPlugReplacement);

        // Charging System Check (electric)
        library.addMaintenanceTask(electricCar, chargingSystemCheck);

        // Exhaust System Inspection (gas, diesel)
        library.addMaintenanceTask(gasCar, exhaustSystemInspection);
        library.addMaintenanceTask(dieselCar, exhaustSystemInspection);

        // Software Updates (electric)
        library.addMaintenanceTask(electricCar, softwareUpdates);

        // Fuel System Cleaning (gas, diesel)
        library.addMaintenanceTask(gasCar, fuelSystemCleaning);
        library.addMaintenanceTask(dieselCar, fuelSystemCleaning);

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
