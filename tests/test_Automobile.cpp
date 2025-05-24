#include <gtest/gtest.h>
#include "Automobile.h"

TEST(AutomobileTest, ConstructorAndGetters) {
    Automobile car("Toyota", "Camry", 2020, 15000);
    EXPECT_EQ(car.getMake(), "Toyota");
    EXPECT_EQ(car.getModel(), "Camry");
    EXPECT_EQ(car.getYear(), 2020);
    EXPECT_EQ(car.getOdometerReading(), 15000);
}

TEST(AutomobileTest, SetOdometerReading) {
    Automobile car("Toyota", "Camry", 2020, 15000);
    car.setOdometerReading(20000);
    EXPECT_EQ(car.getOdometerReading(), 20000);
}
