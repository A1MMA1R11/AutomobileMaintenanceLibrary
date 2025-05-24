#ifndef MAINTENANCELIBRARY_H
#define MAINTENANCELIBRARY_H

#include <vector>
#include <memory>
#include <map>
#include <string>
#include "Automobile.h"
#include "MaintenanceTask.h"

class MaintenanceLibrary {
private:
    std::vector<std::shared_ptr<Automobile>> vehicles;
    std::map<std::shared_ptr<Automobile>, std::vector<std::shared_ptr<MaintenanceTask>>> maintenanceTasks;

public:
    MaintenanceLibrary() = default;
    ~MaintenanceLibrary() = default;

    void addVehicle(std::shared_ptr<Automobile> vehicle);
    void removeVehicle(std::shared_ptr<Automobile> vehicle);
    void listVehicles() const;

    void addMaintenanceTask(std::shared_ptr<Automobile> vehicle, std::shared_ptr<MaintenanceTask> task);
    void removeMaintenanceTask(std::shared_ptr<Automobile> vehicle, std::shared_ptr<MaintenanceTask> task);
    void listMaintenanceTasks(std::shared_ptr<Automobile> vehicle) const;

    std::vector<std::shared_ptr<MaintenanceTask>> getTasksForVehicle(std::shared_ptr<Automobile> vehicle) const;
};

#endif // MAINTENANCELIBRARY_H
