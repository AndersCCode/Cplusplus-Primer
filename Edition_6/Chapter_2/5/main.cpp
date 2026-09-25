#include <iostream>

double celcius_to_fahrenheit(double);

int main() {

    std::cout << "Please enter a Celcius value: ";
    double input;
    std::cin >> input;
    std::cout << input << " degrees Celsius is " << celcius_to_fahrenheit(input) << " degrees Fahrenheit." << std::endl;
    
    return 0;
}

double celcius_to_fahrenheit(double celcius) {
    return ((1.8 * celcius) + 32);
}

