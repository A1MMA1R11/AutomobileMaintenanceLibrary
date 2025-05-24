cmake_minimum_required(VERSION 3.10)
project(AutomobileMaintenanceLibrary
    VERSION 1.0
    DESCRIPTION "A library for managing automobile maintenance tasks"
    LANGUAGES CXX
)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_subdirectory(src)
add_subdirectory(tests)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(AutomobileMaintenanceApp main.cpp)
target_link_libraries(AutomobileMaintenanceApp PRIVATE AutomobileMaintenanceLibrary)
