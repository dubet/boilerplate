#include <gtest/gtest.h>
#include <BoilerPlate/Boilerplate.h>

TEST(FooTest, BasicAssertion) {
    EXPECT_EQ(BoilerPlate::Foo(1, 1), 2);
}

TEST(BarTest, BasicAssertion) {
    EXPECT_EQ(BoilerPlate::Bar(2, 2), 0);
}

