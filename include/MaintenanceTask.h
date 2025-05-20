#ifndef MAINTENANCETASK_H
#define MAINTENANCETASK_H

#include <string>
#include <vector>

class MaintenanceTask {
private:
    std::string taskName;
    std::string description;
    std::vector<std::string> applicableVehicleTypes;

public:
    MaintenanceTask(const std::string& taskName, const std::string& description, const std::vector<std::string>& applicableVehicleTypes);
    ~MaintenanceTask() = default;

    std::string getTaskName() const;
    std::string getDescription() const;
    bool isApplicableTo(const std::string& vehicleType) const;
};

#endif // MAINTENANCETASK_H
