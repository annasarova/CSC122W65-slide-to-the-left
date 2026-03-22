#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/slide.hpp"

TEST_CASE("Array left shift works") {
    int arr[] = {1, 2, 3, 4, 5};
    arrayShiftLeft(arr, 5, 2); // Shift left by 2
    int expected[] = {3, 4, 5, 1, 2};
    for(int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Array right shift works") {
    int arr[] = {1, 2, 3, 4, 5};
    arrayShiftRight(arr, 5, 3); // Shift right by 3
    int expected[] = {3, 4, 5, 1, 2};
    for(int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("Char array shift left works") {
    char letters[] = {'a','b','c','d'};
    arrayShiftLeft(letters, 4, 1);
    char expected[] = {'b','c','d','a'};
    for(int i = 0; i < 4; i++) {
        REQUIRE(letters[i] == expected[i]);
    }
}

TEST_CASE("Char array shift right works") {
    char letters[] = {'a','b','c','d'};
    arrayShiftRight(letters, 4, 2);
    char expected[] = {'c','d','a','b'};
    for(int i = 0; i < 4; i++) {
        REQUIRE(letters[i] == expected[i]);
    }
}

TEST_CASE("Vector left shift works") {
    std::vector<int> vec = {10, 20, 30, 40};
    vectorShift(vec, 1); // Shift left by 1
    std::vector<int> expected = {20, 30, 40, 10};
    for(size_t i = 0; i < vec.size(); i++) {
        REQUIRE(vec[i] == expected[i]);
    }
}

TEST_CASE("Shifts larger than size work") {
    int arr[] = {1, 2, 3};
    arrayShiftLeft(arr, 3, 4); // 4 % 3 = 1 shift
    int expected[] = {2, 3, 1};
    for(int i = 0; i < 3; i++) {
        REQUIRE(arr[i] == expected[i]);
    }

    std::vector<int> vec = {5, 6, 7};
    vectorShift(vec, 5); // 5 % 3 = 2 shifts
    std::vector<int> expectedVec = {7, 5, 6};
    for(size_t i = 0; i < vec.size(); i++) {
        REQUIRE(vec[i] == expectedVec[i]);
    }
}

TEST_CASE("Zero or empty shifts do nothing") {
    int arr[] = {1, 2, 3};
    arrayShiftLeft(arr, 3, 0);
    int expected[] = {1, 2, 3};
    for(int i = 0; i < 3; i++) {
        REQUIRE(arr[i] == expected[i]);
    }

    std::vector<int> vec = {};
    vectorShift(vec, 2); // empty vector, should remain empty
    REQUIRE(vec.empty());
}
