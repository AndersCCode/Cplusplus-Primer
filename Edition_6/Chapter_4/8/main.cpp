#include <iostream>
#include <string>

struct Candybar 
{
    char name[50];
    float diameter;
    float weight;
};

int main()
{
    Candybar * ps = new Candybar{};

    std::cout << "What is the diameter (cm) of the pizza ?";
    std::cin >> ps->diameter;

    std::cout << "What is the name of the company ?";
    std::cin >> ps->name;

    std::cout << "What is the weight (g) of the pizza ?";
    std::cin >> ps->weight;

    std::cout << "Name: " << ps->name << std::endl;
    std::cout << "Diameter: " << ps->diameter << std::endl;
    std::cout << "Weight: " << ps->weight << std::endl;
    
return 0;
}