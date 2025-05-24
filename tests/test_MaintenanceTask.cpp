#include <gtest/gtest.h>
#include "MaintenanceTask.h"

TEST(MaintenanceTaskTest, ConstructorAndGetters) {
    std::vector<std::string> types = {"Electric", "Gas"};
    MaintenanceTask task("Oil Change", "Change engine oil", types);

    EXPECT_EQ(task.getTaskName(), "Oil Change");
    EXPECT_EQ(task.getDescription(), "Change engine oil");
    EXPECT_TRUE(task.isApplicableTo("Electric"));
    EXPECT_TRUE(task.isApplicableTo("Gas"));
    EXPECT_FALSE(task.isApplicableTo("Diesel"));
}
