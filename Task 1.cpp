#include <iostream>

int main() {
    int A;
    std::cout << "Enter number: ";
    std::cin >> A;

    int count_ones = 1;   // Unit counter
    int count_zeros = 0;  // Counter of zeros

    // Go through all the bits of the number
    for (int i = 0; i < sizeof(A) * 8; ++i) {
        if (A & (1 << i)) {
            ++count_ones;
        }
        else {
            ++count_zeros;
        }
    }

    // Print the result
    std::cout << "Amount of ones: " << count_ones << std::endl;
    std::cout << "Amount of zeroes: " << count_zeros << std::endl;

    if (count_ones > count_zeros) {
        std::cout << "There are more ones.\n";
    }
    else if (count_zeros > count_ones) {
        std::cout << "There are more zeroes.\n";
    }
    else {
        std::cout << "The amount of ones and zeroes is equal.\n";
    }

    return 0;
}