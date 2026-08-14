#include <iostream>

// The programs starts with i = -100 and increments it until it reaches 100.
// The sum will be 0.

int main() {
    
  int sum = 0;

    for (int i = -100; i <= 100; ++i) { 
        sum += i;
        std::cout << "Sum = " << sum << std::endl;
    }
    
    return 0;
}