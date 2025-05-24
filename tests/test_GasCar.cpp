#include <gtest/gtest.h>
#include "GasCar.h"

TEST(GasCarTest, ConstructorAndDisplay) {
    GasCar car("Toyota", "Camry", 2020, 30000, 60.0);

    EXPECT_EQ(car.getMake(), "Toyota");
    EXPECT_EQ(car.getModel(), "Camry");
    EXPECT_EQ(car.getYear(), 2020);
    EXPECT_EQ(car.getOdometerReading(), 30000);

    // Check displayInfo runs without error
    EXPECT_NO_THROW(car.displayInfo());
}
