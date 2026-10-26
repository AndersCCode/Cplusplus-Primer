#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter words (to stop, type the word done): " << std::endl;  
    
    std::string token;
    int n = 0;

    do 
    {
        std::cin >> token;
        n += 1;
    }
    while (token != "done");

    std::cout << "You entered a total of " <<  n - 1 << " words." << std::endl;     

return 0;
}