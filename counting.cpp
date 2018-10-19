#include <iostream>

int main() {
    // currVal is the number we're counting; we'll read new values into val
    int currVal = 0, val = 0;
    if (std::cin >> currVal) { // read the first numer and  ensures that the input is not empty
        int cnt = 1; //store the count for the current value we are processing
        while (std::cin >> val) { // read the remaining numbers 
            if (val == currVal) // if the values are the same 
                ++cnt; // add 1 to cnt
            else {
                std::cout << currVal << " occurs "
                << cnt << " time" << std::endl;
                currVal = val; // remember the new value 
                cnt = 1; // reset the counter 
            }
        }
        std::cout << currVal << " occurs " 
        << cnt << " times" << std::endl;
    }
    return 0;
}
