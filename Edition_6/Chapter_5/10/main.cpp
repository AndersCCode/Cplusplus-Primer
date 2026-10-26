#include <iostream>

int main()
{
    std::cout << "Enter number of rows: ";
    int n = 0;
    std::cin >> n;
    
    for (int i = 1; i <= n; ++i) {          // rows
        for (int j = 1; j <= n - i; ++j)    
            std::cout << ".";
        for (int j = 1; j <= i; ++j)        // reuse counter 
            std::cout << "*";
        std::cout << "\n" ;   
    }

return 0;
}