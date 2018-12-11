#include <iostream>
// read many numbers and return their sum

int main() {
    int sum = 0, value = 0;
    //read until end of file, calculating a running total of all values read
    while (std::cin >> value) {
        sum += value; // equivalent to running total of all values read
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
