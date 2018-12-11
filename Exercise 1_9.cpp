#include <iostream>
/*
int main() {
    int value = 50, sum = 0;
    while (value <= 100) {
        sum += value;
        ++value;
    }
    std::cout << "The sum from 50 to 100 is " << sum << std::endl;
    return 0;
}
*/

int main() {
    int sum = 0;
    for (int value = 50; value <= 100; ++value) {
        sum += value;
    }
    std::cout << "The sum form 50 to 100 is " << sum << std::endl;
    return 0;
}
