#include "max1.hpp"
#include <iostream>
#include <string>

int main() {

    // The process of replacing template parameters by concrete types is
    // called instantiation. It results in an instance of a template.
    int i = 42;
    std::cout << "max(7, i):    " << ::max(7, i) << std::endl;

    // Instantiate the max template for double.
    double f1 = 3.4;
    double f2 = -6.7;
    std::cout << "max(f1, f2):  " << ::max(f1, f2) << std::endl;

    // Instantiate the max template for std::string.
    std::string s1 = "mathematics";
    std::string s2 = "math";
    std::cout << "max(s1, s2):  " << ::max(s1, s2) << std::endl;
}
