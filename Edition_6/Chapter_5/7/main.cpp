#include <iostream>
#include <string>
#include <limits>

struct Car
{
    std::string make;
    int year;
};

int main()
{
    std::cout << "How many cars do you wish to catalog?";  
    int n = 0;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Consume newline
    
    Car * ps = new Car[n]{}; 

    for (int i = 0; i < n; i++)
    {
        std::cout << "Car #" << i + 1 << ": " << std::endl;
        std::cout << "Enter the make: ";
        std::getline(std::cin, ps[i].make);
        std::cout << "Enter manufacturing year: ";
        std::cin >> ps[i].year;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Consume newline
    }    
    
    std::cout << "Here is your collection:" << std::endl;

    for (int i = 0; i < n; i++)
        std::cout << ps[i].year << " " << ps[i].make << std::endl;

    delete [] ps;

return 0;
}