#include <iostream>
#include <string>
#include <cctype>

int main() {
    /*
    std::string s("Hello World!!!");
    for (auto &c : s) {
    // convert s to uppercase
        c = toupper(c);
    } // for every char in s (note: c is a reference)
    std::cout << s << std::endl;

    // change the first character to uppercase
    std::string s("hello world!!!");
    if (!s.empty()) {
        s[0] = toupper(s[0]);
    }
    std::cout << s <<std::endl;

    std::string s("some string");
    if (s.begin() != s.end()) { // make sure s is not empty
        auto it = s.begin(); // it denotes the first character in s
        *it = toupper(*it); // make that character uppercase
    }
    std::cout << s << std::endl;

    // change the first word to uppercase
    for (decltype(s.size()) index = 0;
         index != s.size() && !isspace(s[index]);
         ++ index) {
         s[index] = toupper(s[index]);
     }
     */
     std::string s("some string");
     // process characters in s until we run out of characters or we hit a whitespace
     for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
         *it = toupper(*it); // capitalize the current character
     }
     std::cout << s << std::endl;

    return 0;
}
