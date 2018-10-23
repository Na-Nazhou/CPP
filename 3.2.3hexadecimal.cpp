#include <iostream>
#include <string>
#include <cctype>

int main() {
    const std::string hexdigits = "0123456789ABCDEF";
    std::out << "Enter a series of numbers between 0 and 15"
             << " separated by spaces. Hit Enter when finished: "
             << std::endl;
    std::string result;
    std::string::size_type n;
    while (std::cin >> n) 
        if (n < hexdigits.size())
            result += hexdigits[n];
    std::cout << "Your hex number is : " << result << std::endl;

    return 0;
}
