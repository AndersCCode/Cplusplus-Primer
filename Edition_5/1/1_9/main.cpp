#include <iostream>

int main() {

    int sum = 0;
    int number = 50;
    
    while (number <= 100) {
        sum += number;
        number++;
    }

    std::cout << "The sum of 50 to 100 is " << sum << std::endl;

    return 0;
}