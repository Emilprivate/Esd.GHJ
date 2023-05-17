#include "TestFile.h"
#include <iostream>

void TestFile::runTests() {
    testFunction();
}

void TestFile::testFunction() {
    int result = 2 + 2;
    if (result != 4) {
        std::cerr << "Test failed: 2 + 2 != 4" << std::endl;
    } else {
        std::cout << "Test passed: 2 + 2 = " << result << std::endl;
    }
}
