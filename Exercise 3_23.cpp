// Write a program to create a vector with ten int elements.
// Using an iterator, assign each element a value that is twice its current value.
// Test your program by printing the vector.

#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec(10, 1);
    auto it = vec.begin();
    while (it != vec.end()) {
        *it *= 2;
        std::cout << *it << std::endl;
        ++it;
    }
    return 0;
}
