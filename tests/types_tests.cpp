#include <gtest/gtest.h>

#include "core.hpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);

    EXPECT_NO_THROW({ bt::core::example_fun(); });
}