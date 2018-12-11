#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<unsigned> scores(11, 0);
    unsigned grade;
    while (std::cin >> grade) {
        if (grade <= 100)
            ++scores[grade / 10];
    }
    return 0;
}

// Exercise 3.25
// using iterators



// using arrays
// count the number of grades by clusters of ten: 0--9, 10--19, ... 90--99, 100
    unsigned scores[11] = {}; // 11 buckets, all value initialized to 0
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100) {
            ++scores[grade/10]; // increment the counter for the current cluster
        }
    }
