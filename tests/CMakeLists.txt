enable_testing()

# GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)

set(TEST_SOURCES
    test_Automobile.cpp
    test_DieselCar.cpp
    test_ElectricCar.cpp
    test_GasCar.cpp
    test_MaintenanceLibrary.cpp
    test_MaintenanceTask.cpp
)

foreach(TEST_SRC ${TEST_SOURCES})
    get_filename_component(TEST_NAME ${TEST_SRC} NAME_WE)
    add_executable(${TEST_NAME} ${TEST_SRC})
    target_link_libraries(${TEST_NAME} gtest_main AutomobileMaintenanceLibrary)
    gtest_discover_tests(${TEST_NAME})
endforeach()
