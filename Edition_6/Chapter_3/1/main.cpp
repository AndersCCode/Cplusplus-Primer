#include <iostream>

constexpr int kFoot = 12;   // Foot -> Inches

int main() {
    
   int height;

   std::cout << "What is your height (inches) ? __" << '\b' << '\b';
   std::cin >> height;
   std::cout << "Your height is " << height/kFoot << " feet and " << height % kFoot << " inches" << std::endl;
     
return 0;
}