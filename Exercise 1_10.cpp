#include <iostream>

/*
int main() {
    int value = 10;
    while (value >= 0) {
        std::cout << value << std::endl;
        --value;
    }
    return 0;
}
*/

int main() {
    for (int value = 10; value >= 0; --value) {
        std::cout << value << std::endl;
    }
    return 0;
}

int main() {
    unsigned value = 11;
    while (value > 0) {
        --value;
        std::cout << value << std::endl;
    }
    return 0;
}
