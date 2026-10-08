#include <iostream>

constexpr int kFootToInches = 12;   
constexpr float kInchesToMeters = 0.0254;
constexpr float kPoundsToKilograms = 1/2.2;   // 0.454545

int main() {
    
   int LengthFeet = 0;
   int LengthInches = 0;
   int WeightPounds = 0;
   
   std::cout << "What is your height (feet and inches) and weight (pounds)? Start by entering how many feet _" << '\b';
   std::cin >> LengthFeet;
   std::cout << "How many inches __" << '\b' << '\b';
   std::cin >> LengthInches;
   std::cout << "How many pounds ___" << '\b' << '\b' << '\b';
   std::cin >> WeightPounds;
   
   int TotalLength = (LengthFeet * kFootToInches) + LengthInches;
   float HeightMeters = TotalLength * kInchesToMeters;
   float WeightKilograms =  WeightPounds * kPoundsToKilograms;

   std::cout << "Lenght (m) = " << HeightMeters << std::endl;
   std::cout << "Weight (kg) = " << WeightKilograms << std::endl;
   std::cout << "Your Body Mass Index is " << WeightKilograms / (HeightMeters * HeightMeters) << std::endl;

return 0;
}