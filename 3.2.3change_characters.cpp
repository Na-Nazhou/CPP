#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s("Hello World!!!");
    for (auto &c : s)
    // convert s to uppercase
        c = toupper(c); // for every char in s (note: c is a reference)
    std::cout << s << std::endl;

    // change the first character to uppercase
    if (!s.empty())
        s[0] = toupper(s[0]);
    std::cout << s[0] <<std::endl;

    // change the first word to uppercase
    for (decltype(s.size()) index = 0;
         index != s.size() && !isspace(s[index]);
         ++ index)
         s[index] = toupper(s[index]);

    return 0;
}
