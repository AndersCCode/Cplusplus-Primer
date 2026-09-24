#include <iostream>

double lightyear_to_astronomicalunits(double);

int main() {

    std::cout << "Enter the number of light years: ";
    double input;
    std::cin >> input;
    std::cout << input << " light years = " << lightyear_to_astronomicalunits(input) << " astronomical units." << std::endl;
    
    return 0;
}

double lightyear_to_astronomicalunits(double lightyear) {
    return (lightyear * 63240);
}

