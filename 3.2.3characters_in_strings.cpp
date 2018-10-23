#include <iostream>
#include <string>
#include <cctype>

int main() {
    /*std::string str("some string");
    // print the characters in str one character to a line
    for (auto c : str) // for every char in str
    // in this case, type of c is char
    // the for loop associcates teh variable c with str
    // on each iteration, the next character c in the string str
        std::cout << c << std::endl;
    */

    std::string s("Hello World!!!");
    // punt_cnt has the same type that s.size returns;
    decltype(s.size()) punct_cnt = 0;
    // count the number of punctuation characters in s
    for (auto c : s)
        if (ispunct(c))
            ++punct_cnt;
    std::cout << punct_cnt << " punctuation characters in " << s << std::endl;

    return 0;
}
