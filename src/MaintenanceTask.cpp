#include "include/MaintenanceTask.h"
#include <stdexcept>
#include <algorithm>

MaintenanceTask::MaintenanceTask(const std::string& taskName, const std::string& description, const std::vector<std::string>& applicableVehicleTypes)
    : taskName(taskName), description(description), applicableVehicleTypes(applicableVehicleTypes) {
    if (taskName.empty()) {
        throw std::invalid_argument("Task name cannot be empty");
    }
    if (description.empty()) {
        throw std::invalid_argument("Description cannot be empty");
    }
    if (applicableVehicleTypes.empty()) {
        throw std::invalid_argument("Applicable vehicle types cannot be empty");
    }
}

std::string MaintenanceTask::getTaskName() const {
    return taskName;
}

std::string MaintenanceTask::getDescription() const {
    return description;
}

bool MaintenanceTask::isApplicableTo(const std::string& vehicleType) const {
    return std::find(applicableVehicleTypes.begin(), applicableVehicleTypes.end(), vehicleType) != applicableVehicleTypes.end();
}
