#include <iostream>

// U.S. Census Bureau world clock
// World population = 8,209,917,546
// US population = 342,620,143

int main() {
    
   long long population = 0;
   int populationUS = 0;
   std::cout << "Enter the world's population: " << std::endl;
   std::cin >> population;

   std::cout << "Enter the population of the US: " << std::endl;
   std::cin >> populationUS;

   std::cout << "The population of the US is " << (static_cast<float>(populationUS) / static_cast<float>(population)) * 100 << "\% of the world population." << std::endl;

return 0;
}