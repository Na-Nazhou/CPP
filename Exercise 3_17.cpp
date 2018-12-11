// Read a sequence of words from cin and store the values in a vector.
// After you’ve read all the words, process the vector
// and change each word to uppercase.
// Print the transformed elements, eight words to a line.

#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main() {
    std::vector<std::string> text;
    std::string word;
    while (std::cin >> word) {
        for (auto &c : word) {
            c = toupper(c);
        }
        text.push_back(word);
    }

    decltype(text.size()) count = 1;
    while (count < text.size()) {
        if (count % 8 == 0) {
            std::cout << text[count - 1] << std::endl;
        } else {
            std::cout << text[count - 1] << " ";
        }
        ++count;
    }
    return 0;
}

// using iterators
/*
int main() {
    std::vector<std::string> text;
    std::string word;
    while (std::cin >> word) {
        for (auto &c : word) {
            c = toupper(c);
        }
        text.push_back(word);
    }

    decltype(text.size()) count = 0;
    auto iter = text.cbegin();
    while (iter != text.cend()) {
        if (count % 8 == 1) {
            std::cout << *iter << std::endl;
        } else {
            std::cout << *iter << " ";
        }
        ++count;
        ++iter;
    }
    return 0;
}
*/
