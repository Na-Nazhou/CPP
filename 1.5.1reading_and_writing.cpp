#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item book;
    // read ISBN, number of copies sold, and sales price
    std::cin >> book;
    // write ISBN, number of copies sold, total revenues, and average price
    std::cout << book << std::endl;
    return 0;
}

// input: 0-201-70353-X 4 24.99
// output: 0-201-70353-X 4 99.96 24.99
