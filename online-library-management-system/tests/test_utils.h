#ifndef TEST_UTILS_H
#define TEST_UTILS_H

#include <iostream>
#include <cassert>

// Utility function to compare two strings for equality in tests
inline void assertEqual(const std::string& expected, const std::string& actual, const std::string& message) {
    if (expected != actual) {
        std::cerr << "Assertion failed: " << message << "\nExpected: " << expected << "\nActual: " << actual << std::endl;
        assert(false);
    }
}

// Utility function to compare two integers for equality in tests
inline void assertEqual(int expected, int actual, const std::string& message) {
    if (expected != actual) {
        std::cerr << "Assertion failed: " << message << "\nExpected: " << expected << "\nActual: " << actual << std::endl;
        assert(false);
    }
}

// Utility function to check if a condition is true in tests
inline void assertTrue(bool condition, const std::string& message) {
    if (!condition) {
        std::cerr << "Assertion failed: " << message << std::endl;
        assert(false);
    }
}

#endif // TEST_UTILS_H