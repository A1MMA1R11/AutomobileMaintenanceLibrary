# CMakeLists.txt for src directory to build a library from all cpp files

add_library(AutomobileMaintenanceLibrary
    Automobile.cpp
    DieselCar.cpp
    ElectricCar.cpp
    GasCar.cpp
    MaintenanceLibrary.cpp
    MaintenanceTask.cpp
)

target_include_directories(AutomobileMaintenanceLibrary PUBLIC ../include)
