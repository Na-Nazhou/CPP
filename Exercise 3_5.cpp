#include <iostream>
#include <string>

// Write a program to read strings from the standard input,
// concatenating what is read into one large string.
// Print the concatenated string.
/*
int main() {
    std::string result, s;
    while (std::cin >> s) {
        result += s;
    }
    std::cout << result << std::endl;
    return 0;
}
*/

// Next, change the program to separate adjacent input strings by a space.
int main() {
    std::string result, s;
    while (std::cin >> s) {
        result += s + " ";
    }
    std::cout << result << std::endl;
    return 0;
}
