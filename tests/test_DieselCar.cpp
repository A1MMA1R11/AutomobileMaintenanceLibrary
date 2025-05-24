#include <gtest/gtest.h>
#include "DieselCar.h"

TEST(DieselCarTest, ConstructorAndDisplay) {
    DieselCar car("Ford", "F-250", 2018, 80000, 90.0);

    EXPECT_EQ(car.getMake(), "Ford");
    EXPECT_EQ(car.getModel(), "F-250");
    EXPECT_EQ(car.getYear(), 2018);
    EXPECT_EQ(car.getOdometerReading(), 80000);

    // Check displayInfo runs without error
    EXPECT_NO_THROW(car.displayInfo());
}
