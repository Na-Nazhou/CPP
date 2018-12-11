#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item total;
    if (std::cin >> total) { // read the first transaction and  ensures that the input is not empty
        Sales_item trans;
        while (std::cin >> trans) { // read the remaining transactions
            if (total.isbn() == trans.isbn())
                total += trans;
            else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    } else {
      // no input! warn the user
      std::cerr << "No data?!" << std::endl;
      return -1; // indicate failure
    }
    return 0;
}
