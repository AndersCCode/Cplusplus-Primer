#include <iostream>

constexpr int kArcToMinutes = 60;
constexpr int kArcToSeconds = 3600;


int main() {
    
   float LatitudeDegrees = 0.0;
   float LatitudeMinutes = 0.0;
   float LatitudeSeconds = 0.0;

   std::cout << "Enter a latitude in degrees, minutes and seconds:" << std::endl;
   std::cout << "First, enter the degrees: ";
   std::cin >> LatitudeDegrees;
   std::cout << "Next, enter the minutes of arc: ";
   std::cin >> LatitudeMinutes;
   std::cout << "Finally, enter the seconds of arc: ";
   std::cin >> LatitudeSeconds;

   float Angle = LatitudeDegrees + (LatitudeMinutes / kArcToMinutes) + (LatitudeSeconds / kArcToSeconds);
   
   std::cout << LatitudeDegrees << " degrees, " << LatitudeMinutes << " minutes, " << LatitudeSeconds << " seconds = " << Angle << " degrees" << std::endl;


return 0;
}