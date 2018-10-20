#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string str("some string");
    // print the characters in str one character to a line
    for (auto c : str) // for every char in str
    // in this case, type of c is char
        std::cut << c << std::endl;
}
