#include <iostream>
#include <string>

int main() {
    std::string line;
    while(getline(std::cin, line)) {
        // getline function reads the given stream up to and including the first
        // newline and stores what it read, not including the new line;
        if (!line.empty())
            std::cout << line << std::endl;
        if (line.size() > 80)
            std::cout << line << std::endl;
    }
    return 0;
}
