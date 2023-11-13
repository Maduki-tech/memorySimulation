#include <gtest/gtest.h>
#include "../includes/add.h"

TEST(AddTest, PositiveNumbers)
{
    EXPECT_EQ(add(1, 2), 3);

    EXPECT_EQ(add(10, 20), 30);

    EXPECT_EQ(add(100, 200), 300);

    EXPECT_EQ(add(1000, 2000), 3000);

}

TEST(AddTest, NegativeNumbers)
{
    EXPECT_EQ(add(-1, -2), -3);

    EXPECT_EQ(add(-10, -20), -30);

    EXPECT_EQ(add(-100, -200), -300);

    EXPECT_EQ(add(-1000, -2000), -3000);

}
        