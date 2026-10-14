#include <iostream>
#include <string>

struct CandyBar 
{
    char name[50];
    float weight;
    int energy;
};

int main()
{
    CandyBar snack = {"Mocha Much", 2.3, 350};

    std::cout << snack.name << std::endl;
    std::cout << snack.weight << std::endl;
    std::cout << snack.energy << std::endl;
    
return 0;
}