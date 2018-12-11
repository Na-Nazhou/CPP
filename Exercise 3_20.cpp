// Read a set of integers into a vector.
// Print the sum of each pair of adjacent elements.
// Change your program so that it prints the sum of the first and last elements,
// followed by the sum of the second and second-to-last, and so on.

#include <iostream>
#include <vector>

/*
int main() {
    int num;
    std::vector<int> vec;
    while (std::cin >> num) {
        vec.push_back(num);
    }
    decltype(vec.size()) count = 1;
    while (count < vec.size()) {
        std::cout << vec[count] + vec[count - 1] << std::endl;
        count += 2;
    }
    return 0;
}
*/

int main() {
    int num;
    std::vector<int> vec;
    while (std::cin >> num) {
        vec.push_back(num);
    }
    decltype(vec.size()) count = 0;
    while (count < vec.size() / 2) {
        std::cout << vec[count] + vec[vec.size() - count - 1] << std::endl;
        ++ count;
    }
    return 0;
}

// using iterators
