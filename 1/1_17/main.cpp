#include <iostream>

// Ctrl - D is required to print the last value
// If all the values are equal the while loop never breaks (doesn't catch Enter as a break).
// If there are no duplicate values all but the last value will be printed. 
// Ctrl - D is required for the last.

int main() {
    int currval = 0;
    int val = 0;

    if (std::cin >> currval) {  // Read first value
        int cnt = 1;

        while (std::cin >> val) {
            if (val == currval) 
                cnt++;
            else {
                std::cout << currval << " occurs " << cnt << " times " << std::endl;
                currval = val;
                cnt = 1;
            }
        }
        std::cout << currval << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}