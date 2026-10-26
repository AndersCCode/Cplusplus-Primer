#include <iostream>

int main()
{
    float sumDaphne = 100.0;
    float sumCleo = 100.0;
    int years = 0;
    
    do
    {
        sumDaphne += 10;
        sumCleo *= 1.05;
        years++;
    } while (sumCleo < sumDaphne); 
    
    std::cout << "It takes " << years << " years." << std::endl;
    std::cout << "Daphne = " << sumDaphne << "$" << std::endl;
    std::cout << "Cleo = " << sumCleo << "$" << std::endl;
    
return 0;
}




