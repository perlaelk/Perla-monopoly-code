#include "gtest/gtest.h"
#include "User.hpp"
#include <User.hpp>
#include <random>

TEST(PlayerTest, ConstructorAndGetters) {
    player::Player p("Alice", 42, 1000.0);
    EXPECT_EQ(p.getName(), "Alice");
    EXPECT_EQ(p.getScore(), 42);
    EXPECT_DOUBLE_EQ(p.getCash(), 1000.0);
}
TEST(PlayerTest, Setters) {
    player::Player p("Bob", 0, 0.0);
    p.setName("Charlie");
    EXPECT_EQ(p.getName(), "Charlie");
    p.setScore(100);
    EXPECT_EQ(p.getScore(), 100);
    p.setCash(500.0);
    EXPECT_DOUBLE_EQ(p.getCash(), 500.0);
}

TEST(PlayerTest, Cash) {
    player::Player p("Alice", 42, 1000.0);
    EXPECT_DOUBLE_EQ(p.getCash(), 1000.0);

    p.setCash(500.0);
    EXPECT_DOUBLE_EQ(p.getCash(), 500.0);

    p.setCash(0.0);
    EXPECT_DOUBLE_EQ(p.getCash(), 0.0);

    p.setCash(-500.0);
    EXPECT_DOUBLE_EQ(p.getCash(), -500.0);
}
