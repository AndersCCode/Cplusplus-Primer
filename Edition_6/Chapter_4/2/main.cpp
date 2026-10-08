#include <iostream>
#include <string>

int main()
{
    //const int ArSize = 20;
    //char name[ArSize];
    std::string name;
    //char dessert[ArSize];
    std::string dessert;

    std::cout << "Enter your name:\n";
    //std::cin.getline(name, ArSize); // reads through newline
    std::cin >> name;

    std::cout << "Enter your favorite dessert:\n";
    //std::cin.getline(dessert, ArSize);
    std::cin >> dessert;
    
    std::cout << "I have some delicious " << dessert;
    std::cout << " for you, " << name << ".\n";

return 0;
}