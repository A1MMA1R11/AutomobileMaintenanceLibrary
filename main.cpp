#include <iostream>
#include <memory>
#include <limits>
#include "include/Automobile.h"
#include "include/MaintenanceTask.h"
#include "include/MaintenanceLibrary.h"
#include "include/DieselCar.h"
#include "include/GasCar.h"
#include "include/ElectricCar.h"

void displayMenu() {
    std::cout << "\n==== Maintenance System Menu ====\n";
    std::cout << "1. Add Vehicle\n";
    std::cout << "2. Remove Vehicle\n";
    std::cout << "3. List Vehicles\n";
    std::cout << "4. Add Maintenance Task\n";
    std::cout << "5. Remove Maintenance Task\n";
    std::cout << "6. List Maintenance Tasks for a Vehicle\n";
    std::cout << "0. Exit\n";
    std::cout << "Choose an option: ";
}

std::shared_ptr<Automobile> createVehicle() {
    std::string type, make, model;
    int year, mileage;
    double fuel;

    std::cout << "Enter vehicle type (electric/gas/diesel): ";
    std::cin >> type;
    std::cout << "Enter make: ";
    std::cin >> make;
    std::cout << "Enter model: ";
    std::cin >> model;
    std::cout << "Enter year: ";
    std::cin >> year;
    std::cout << "Enter mileage: ";
    std::cin >> mileage;
    std::cout << "Enter battery/fuel capacity: ";
    std::cin >> fuel;

    if (type == "electric")
        return std::make_shared<ElectricCar>(make, model, year, mileage, fuel);
    else if (type == "gas")
        return std::make_shared<GasCar>(make, model, year, mileage, fuel);
    else if (type == "diesel")
        return std::make_shared<DieselCar>(make, model, year, mileage, fuel);
    else
        std::cout << "Unknown vehicle type.\n";
    
    return nullptr;
}

std::shared_ptr<MaintenanceTask> createTask() {
    std::string name, desc;
    int count;
    std::vector<std::string> applicableTypes;

    std::cout << "Enter task name: ";
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cout << "Enter task description: ";
    std::getline(std::cin, desc);
    std::cout << "Enter number of applicable vehicle types: ";
    std::cin >> count;

    for (int i = 0; i < count; ++i) {
        std::string type;
        std::cout << "Enter type " << (i + 1) << " (electric/gas/diesel): ";
        std::cin >> type;
        applicableTypes.push_back(type);
    }

    return std::make_shared<MaintenanceTask>(name, desc, applicableTypes);
}

int main() {
    MaintenanceLibrary library;
    std::vector<std::shared_ptr<Automobile>> vehicles;
    std::vector<std::shared_ptr<MaintenanceTask>> tasks;

    int choice;
    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                auto vehicle = createVehicle();
                if (vehicle) {
                    library.addVehicle(vehicle);
                    vehicles.push_back(vehicle);
                    std::cout << "Vehicle added.\n";
                }
                break;
            }
            case 2: {
                int index;
                std::cout << "Enter vehicle index to remove: ";
                std::cin >> index;
                if (index >= 0 && index < vehicles.size()) {
                    library.removeVehicle(vehicles[index]);
                    vehicles.erase(vehicles.begin() + index);
                    std::cout << "Vehicle removed.\n";
                } else {
                    std::cout << "Invalid index.\n";
                }
                break;
            }
            case 3: {
                library.listVehicles();
                break;
            }
            case 4: {
                if (vehicles.empty()) {
                    std::cout << "No vehicles available.\n";
                    break;
                }
                auto task = createTask();
                if (!task) break;
                tasks.push_back(task);
                int vehicleIndex;
                std::cout << "Enter index of vehicle to add task to: ";
                std::cin >> vehicleIndex;
                if (vehicleIndex >= 0 && vehicleIndex < vehicles.size()) {
                    library.addMaintenanceTask(vehicles[vehicleIndex], task);
                    std::cout << "Task added to vehicle.\n";
                } else {
                    std::cout << "Invalid vehicle index.\n";
                }
                break;
            }
            case 5: {
                if (vehicles.empty() || tasks.empty()) {
                    std::cout << "No vehicles or tasks available.\n";
                    break;
                }
                int vehicleIndex, taskIndex;
                std::cout << "Enter vehicle index: ";
                std::cin >> vehicleIndex;
                std::cout << "Enter task index: ";
                std::cin >> taskIndex;
                if (vehicleIndex >= 0 && vehicleIndex < vehicles.size() &&
                    taskIndex >= 0 && taskIndex < tasks.size()) {
                    library.removeMaintenanceTask(vehicles[vehicleIndex], tasks[taskIndex]);
                    std::cout << "Task removed from vehicle.\n";
                } else {
                    std::cout << "Invalid index.\n";
                }
                break;
            }
            case 6: {
                int vehicleIndex;
                std::cout << "Enter vehicle index: ";
                std::cin >> vehicleIndex;
                if (vehicleIndex >= 0 && vehicleIndex < vehicles.size()) {
                    library.listMaintenanceTasks(vehicles[vehicleIndex]);
                } else {
                    std::cout << "Invalid vehicle index.\n";
                }
                break;
            }
            case 0:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid option.\n";
        }
    } while (choice != 0);

    return 0;
}
