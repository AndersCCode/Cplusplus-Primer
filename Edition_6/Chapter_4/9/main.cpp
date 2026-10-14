#include <iostream>
#include <string>

struct Candybar 
{
    char name[50];
    float weight;
    int energy;
};

int main()
{
    Candybar * ps = new Candybar[3]{{"Mocha Much", 2.3, 350}, {"Beef sticks", 113.0, 270}, {"Protein bar", 20.0, 185}}; 
    
    std::cout << ps[0].name << std::endl;
    std::cout << (*ps).name << std::endl;   // alternative method
    std::cout << (ps)->name << std::endl;   // alternative method
    std::cout << ps[0].weight << std::endl;
    std::cout << ps[0].energy << std::endl << std::endl;

    std::cout << ps[1].name << std::endl;
    std::cout << ps[1].weight << std::endl;
    std::cout << ps[1].energy << std::endl << std::endl;

    std::cout << ps[2].name << std::endl;
    std::cout << (ps + 2)->name << std::endl;   // alternative method
    std::cout << ps[2].weight << std::endl;
    std::cout << ps[2].energy << std::endl << std::endl;

    delete [] ps;
    
return 0;
}