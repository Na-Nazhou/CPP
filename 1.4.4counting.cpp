// 1.4.4
#include <iostream>

int main() {
    // currVal is the number we're counting; we'll read new values into val
    int currVal = 0, val = 0;
    if (std::cin >> currVal) { // read the first number and ensures that the input is not empty
        int cnt = 1; //store the count for the current value we are processing
        while (std::cin >> val) { // read the remaining numbers
            if (val == currVal) { // if the values are the same
                ++cnt; // add 1 to cnt
            } else {
                std::cout << currVal << " occurs " << cnt << " time(s)" << std::endl;
                currVal = val; // remember the new value
                cnt = 1; // reset the counter
            }
        }
        std::cout << currVal << " occurs " << cnt << " time(s)" << std::endl;
    }
    return 0;
}

// 42 42 42 42 42 55 55 62 100 100 100
// currVal = 42
// val = 42, cnt = 2
// val = 42, cnt = 3
// val = 42, cnt = 4
// val = 42, cnt = 5
// val = 55
// 42 occurs 5 times
// currVal = 55, cnt = 1
// val = 55, cnt = 2
// val = 62
// 55 occurs 2 times
// currVal = 62, cnt = 1
// val = 100
// 62 occurs 1 time
// currVal = 100, cnt = 1
// val = 100, cnt = 2
// val = 100, cnt = 3
// 100 occurs 3 times
