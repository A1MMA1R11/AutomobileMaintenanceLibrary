#include <gtest/gtest.h>
#include "MaintenanceLibrary.h"
#include "ElectricCar.h"
#include "MaintenanceTask.h"

TEST(MaintenanceLibraryTest, AddAndListVehicles) {
    MaintenanceLibrary lib;
    auto car = std::make_shared<ElectricCar>("Tesla", "Model 3", 2020, 20000, 75.0);

    lib.addVehicle(car);

    // Redirect std::cout to a stringstream to test output
    testing::internal::CaptureStdout();
    lib.listVehicles();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Tesla"), std::string::npos);
}

TEST(MaintenanceLibraryTest, AddAndListMaintenanceTasks) {
    MaintenanceLibrary lib;
    auto car = std::make_shared<ElectricCar>("Tesla", "Model Y", 2021, 10000, 82.0);
    auto task = std::make_shared<MaintenanceTask>("Battery Check", "Check battery health", std::vector<std::string>{"Electric"});

    lib.addVehicle(car);
    lib.addMaintenanceTask(car, task);

    // Redirect std::cout to a stringstream to test output
    testing::internal::CaptureStdout();
    lib.listMaintenanceTasks(car);
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Battery Check"), std::string::npos);
}
