#include <iostream>

int main() {
    
   float distance = 0;
   float amountGasoline = 0;

   std::cout << "How many miles have you driven ?" << std::endl;
   std::cin >> distance;
   std::cout << "How many gallons of gasoline have you used ?" << std::endl;
   std::cin >> amountGasoline;

   std::cout << "Miles per gallon: " << distance / amountGasoline << std::endl;

return 0;
}