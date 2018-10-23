#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string word;
    std::vector<std::string> text;
    while (std::cin >> word) {
        text.push_back(word); // append word to text
    }
    return 0;
}
