#include <iostream>
#include <string>

int main() {
    std::string word; // empty string
    while (std::cin >> word) //read until end-of-file
        std::cout << word << std::endl;
    return 0;
}
