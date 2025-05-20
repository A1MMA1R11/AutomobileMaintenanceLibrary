#include "include/MaintenanceLibrary.h"
#include <iostream>
#include <algorithm>
#include <stdexcept>

void MaintenanceLibrary::addVehicle(std::shared_ptr<Automobile> vehicle) {
    if (!vehicle) {
        throw std::invalid_argument("Cannot add a null vehicle");
    }
    auto it = std::find(vehicles.begin(), vehicles.end(), vehicle);
    if (it != vehicles.end()) {
        throw std::runtime_error("Vehicle already exists in the library");
    }
    vehicles.push_back(vehicle);
    maintenanceTasks[vehicle] = std::vector<std::shared_ptr<MaintenanceTask>>();
}

void MaintenanceLibrary::removeVehicle(std::shared_ptr<Automobile> vehicle) {
    if (!vehicle) {
        throw std::invalid_argument("Cannot remove a null vehicle");
    }
    auto it = std::find(vehicles.begin(), vehicles.end(), vehicle);
    if (it == vehicles.end()) {
        throw std::runtime_error("Vehicle not found in the library");
    }
    vehicles.erase(it);
    maintenanceTasks.erase(vehicle);
}

void MaintenanceLibrary::listVehicles() const {
    if (vehicles.empty()) {
        std::cout << "No vehicles in the library." << std::endl;
        return;
    }
    for (const auto& vehicle : vehicles) {
        vehicle->displayInfo();
    }
}

void MaintenanceLibrary::addMaintenanceTask(std::shared_ptr<Automobile> vehicle, std::shared_ptr<MaintenanceTask> task) {
    if (!vehicle || !task) {
        throw std::invalid_argument("Vehicle and task must not be null");
    }
    auto it = std::find(vehicles.begin(), vehicles.end(), vehicle);
    if (it == vehicles.end()) {
        throw std::runtime_error("Vehicle not found in the library");
    }
    // Check if task is applicable to vehicle type
    std::string vehicleType;
    if (dynamic_cast<ElectricCar*>(vehicle.get())) {
        vehicleType = "electric";
    } else if (dynamic_cast<GasCar*>(vehicle.get())) {
        vehicleType = "gas";
    } else if (dynamic_cast<DieselCar*>(vehicle.get())) {
        vehicleType = "diesel";
    } else {
        throw std::runtime_error("Unknown vehicle type");
    }
    if (!task->isApplicableTo(vehicleType)) {
        throw std::runtime_error("Task is not applicable to this vehicle type");
    }
    auto& tasks = maintenanceTasks[vehicle];
    auto taskIt = std::find(tasks.begin(), tasks.end(), task);
    if (taskIt != tasks.end()) {
        throw std::runtime_error("Task already assigned to this vehicle");
    }
    tasks.push_back(task);
}

void MaintenanceLibrary::removeMaintenanceTask(std::shared_ptr<Automobile> vehicle, std::shared_ptr<MaintenanceTask> task) {
    if (!vehicle || !task) {
        throw std::invalid_argument("Vehicle and task must not be null");
    }
    auto it = std::find(vehicles.begin(), vehicles.end(), vehicle);
    if (it == vehicles.end()) {
        throw std::runtime_error("Vehicle not found in the library");
    }
    auto& tasks = maintenanceTasks[vehicle];
    auto taskIt = std::find(tasks.begin(), tasks.end(), task);
    if (taskIt == tasks.end()) {
        throw std::runtime_error("Task not found for this vehicle");
    }
    tasks.erase(taskIt);
}

void MaintenanceLibrary::listMaintenanceTasks(std::shared_ptr<Automobile> vehicle) const {
    if (!vehicle) {
        std::cout << "Invalid vehicle." << std::endl;
        return;
    }
    auto it = std::find(vehicles.begin(), vehicles.end(), vehicle);
    if (it == vehicles.end()) {
        std::cout << "Vehicle not found in the library." << std::endl;
        return;
    }
    const auto& tasks = maintenanceTasks.at(vehicle);
    if (tasks.empty()) {
        std::cout << "No maintenance tasks for this vehicle." << std::endl;
        return;
    }
    std::cout << "Maintenance tasks for vehicle:" << std::endl;
    for (const auto& task : tasks) {
        std::cout << "- " << task->getTaskName() << ": " << task->getDescription() << std::endl;
    }
}
