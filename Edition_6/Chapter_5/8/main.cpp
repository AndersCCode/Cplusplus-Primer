#include <iostream>
#include <cstring>

int main()
{
    std::cout << "Enter words (to stop, type the word done): " << std::endl;  
    
    char token[20];
    int n = 0;

    do 
    {
        std::cin >> token;
        n += 1;
    }
    while (strcmp(token, "done"));

    std::cout << "You entered a total of " <<  n - 1 << " words." << std::endl;     

return 0;
}