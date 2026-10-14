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
    CandyBar snacks[3] = {{"Mocha Much", 2.3, 350}, {"Beef sticks", 113.0, 270}, {"Protein bar", 20.0, 185}};
    
    std::cout << snacks[0].name << std::endl;
    std::cout << snacks[0].weight << std::endl;
    std::cout << snacks[0].energy << std::endl << std::endl;

    std::cout << snacks[1].name << std::endl;
    std::cout << snacks[1].weight << std::endl;
    std::cout << snacks[1].energy << std::endl << std::endl;

    std::cout << snacks[2].name << std::endl;
    std::cout << snacks[2].weight << std::endl;
    std::cout << snacks[2].energy << std::endl << std::endl;
    
return 0;
}