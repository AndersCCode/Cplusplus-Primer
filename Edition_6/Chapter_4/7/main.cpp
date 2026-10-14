#include <iostream>
#include <string>

struct CandyBar 
{
    char name[50];
    float diameter;
    float weight;
};

int main()
{
    CandyBar WingateCompany;

    std::cout << "What is the name of the company ?";
    std::cin >> WingateCompany.name;

    std::cout << "What is the diameter (cm) of the pizza ?";
    std::cin >> WingateCompany.diameter;

    std::cout << "What is the weight (g) of the pizza ?";
    std::cin >> WingateCompany.weight;

    std::cout << WingateCompany.name << std::endl;
    std::cout << WingateCompany.diameter << std::endl;
    std::cout << WingateCompany.weight << std::endl;
    
return 0;
}