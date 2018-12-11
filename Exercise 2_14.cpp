#include <iostream>

int main() { // main: global scope
    int i = 100, sum = 0; // i, sum: block scope
    for (int i = 0; i != 10; ++i) {
        sum += i;
    }
    std::cout << i << " " << sum << std::endl;
    return 0;
}
