#include <iostream>

constexpr int HoursInDay = 24;
constexpr int MinutesInHour = 60;
constexpr int SecondsInMinute = 60;

int main() {
    
   long long Time = 0;

   std::cout << "Enter the number of seconds: " << std::endl;
   std::cin >> Time;

   float days = Time / (SecondsInMinute * MinutesInHour * HoursInDay);
   float hours =  (Time % (SecondsInMinute * MinutesInHour * HoursInDay)) / (SecondsInMinute * MinutesInHour);
   float minutes = ((Time % (SecondsInMinute * MinutesInHour * HoursInDay)) % (SecondsInMinute * MinutesInHour)) / SecondsInMinute; 
   float seconds = ((Time % (SecondsInMinute * MinutesInHour * HoursInDay)) % (SecondsInMinute * MinutesInHour)) % SecondsInMinute;
   std::cout << days << " days, " << hours << " hours, " << minutes << " minutes " << seconds << " seconds " << std::endl;


return 0;
}