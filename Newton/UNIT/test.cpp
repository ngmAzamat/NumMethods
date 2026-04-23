#include <gtest/gtest.h>
#include "lib.hpp"

TEST(AdditionTest, PositiveNumbers) {
    EXPECT_EQ(f(1, 2, 3), 5);
}

TEST(AdditionTest, NegativeNumbers) {
    EXPECT_EQ(f(-1, -2, 3), 5);
}