#include <gtest/gtest.h>
#include "ElectricCar.h"

TEST(ElectricCarTest, ConstructorAndDisplay) {
    ElectricCar car("Tesla", "Model S", 2021, 20000, 100.0);

    EXPECT_EQ(car.getMake(), "Tesla");
    EXPECT_EQ(car.getModel(), "Model S");
    EXPECT_EQ(car.getYear(), 2021);
    EXPECT_EQ(car.getOdometerReading(), 20000);

    // DisplayInfo() is expected to work without throwing exceptions
    EXPECT_NO_THROW(car.displayInfo());
}
