#include "median.hpp"

#include <gtest/gtest.h>

#include <cstddef>
#include <vector>

namespace
{

TEST(Array, Int) {
    int a[] = {0, 1, 2};
    EXPECT_EQ( median( a ), 1 );
}

TEST(Array, Double) {
    double a[] = {0, 1, 2, 3};
    EXPECT_EQ( median( a ), 1.5 );
}

TEST(DynamicallyAllocatedArray, Int) {
    std::size_t sz = 3;

    int * a = new int[sz];
    *a = 0;
    *(a + 1) = 1;
    *(a + 2) = 2;
    EXPECT_EQ( median( a, sz ), 1 );
}

TEST(Vector, Int) {
    std::vector<int> v = {0, 1, 2};
    EXPECT_EQ( median( v ), 1 );
}

TEST(Vector, Double) {
    std::vector<double> v = {0, 1, 2, 3};
    EXPECT_EQ( median( v ), 1.5 );
}

}
