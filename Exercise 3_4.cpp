#include <iostream>
#include <string>
// Write a program to read two strings and report whether the strings are equal.
// If not, report which of the two is larger.
/*
int main() {
    std::string s1, s2;
    std::cin >> s1 >> s2;
    if (s1 > s2) {
        std::cout << s1 << " is larger than " << s2 << std::endl;
    } else if (s1 < s2) {
        std::cout << s2 << " is larger than " << s1 << std::endl;
    } else {
        std::cout << s1 << " and " << s2 << " are equal. " << std::endl;
    }
    return 0;
}
*/

// Now, change the program to report whether the strings have the same length,
// and if not, report which is longer.

int main() {
    std::string s1, s2;
    std::cin >> s1 >> s2;
    if (s1.size() > s2.size()) {
        std::cout << s1 << " is longer than " << s2 << std::endl;
    } else if (s1.size() < s2.size()) {
        std::cout << s2 << " is longer than " << s1 << std::endl;
    } else {
        std::cout << s1 << " and " << s2 << " have the same length. " << std::endl;
    }
    return 0;
}
