#include <iostream>
#include <vector>
#include <cctype>
#include <string>

/*
int main() {
// print each line in text up to the first blank line
    for (auto it = text.cbegin();
         it != text.cend() && !it->empty();
         ++it) {
             std::cout << *it << std::endl;
    }
    return 0;
}
*/


// Exercise 3.22
int main() {
    std::vector<std::string> text;
    std::string word;
    while (std::cin >> word) {
        text.push_back(word);
    }
    for (auto it = text.cbegin();
         it !=text.cend();
         ++it) {
            it = toupper(it);
            std::cout << *it << std::endl;
         }
    return 0;
}

// auto mid = vi.begin() + vi.size() / 2;
