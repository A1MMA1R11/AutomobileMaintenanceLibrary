cmake_minimum_required(VERSION 3.10)
project(AutomobileMaintenanceLibrary)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(AutomobileMaintenanceLibrary
    main.cpp
    src/Automobile.cpp
    src/MaintenanceTask.cpp
    src/MaintenanceLibrary.cpp
)
