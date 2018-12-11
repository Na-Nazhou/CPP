#include <iostream>
#include <string>
#include <cctype>

int main() {
    const std::string hexdigits = "0123456789ABCDEF";
    std::cout << "Enter a series of numbers between 0 and 15"
             << " separated by spaces. Hit Enter when finished: "
             << std::endl;
    std::string result;
    std::string::size_type n;
    while (std::cin >> n){
        if (n < hexdigits.size()) {
            result += hexdigits[n];
        }
    }
    std::cout << "Your hex number is : " << result << std::endl;
    return 0;
}

// input
// 12 0 5 15 8 15
// output
// C05F8F
