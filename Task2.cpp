#include <iostream>
#include <vector>

std::vector<int> XOR_operation(const std::vector<int>& A, const std::vector<int>& B) {
    std::vector<int> result;

    // Check that the sequences have the same length
    if (A.size() != B.size()) {
        std::cerr << "The sequences must have the same length!" << std::endl;
        return result;
    }

    for (size_t i = 0; i < A.size(); ++i) {
        result.push_back(A[i] ^ B[i]);  // Perform the XOR operation for each pair of bits
    }

    return result;
}

int main1() {
    // Example of sequences
    std::vector<int> A = { 1, 0, 1, 0, 1, 0 };
    std::vector<int> B = { 1, 1, 0, 0, 1, 1 };

    // Perform the XOR operation
    std::vector<int> result = XOR_operation(A, B);

    // Print the result
    std::cout << "The result is XOR: ";
    for (int bit : result) {
        std::cout << bit;
    }
    std::cout << std::endl;

    return 0;
}
