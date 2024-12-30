#include <gtest/gtest.h>
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv); // Initialisation avec argc/argv
    int testResult = RUN_ALL_TESTS(); // Exécution des tests
    std::cout << "Tests completed with result: " << testResult << std::endl;
    return testResult;
}
