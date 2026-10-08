#include <iostream>

// 100 km = 62.14 miles
// 1 gallon = 3.875 liters

constexpr float KilometersToMiles = 0.6214;
constexpr float Gallon = 3.875;


int main() {
    
   float amountGasolineLiter = 0;
   float distance = 0;
   
   std::cout << "Enter your consumption (l/mil). Start with the amount of gasoline (liters): " << std::endl;
   std::cin >> amountGasolineLiter;
   std::cout << "Enter distance (kilometers): " << std::endl;
   std::cin >> distance;

   std::cout << "Miles per gallon: " << (distance * KilometersToMiles) / (amountGasolineLiter / Gallon) << std::endl;

return 0;
}