#include <iostream>

int main()
{
    int ch = 0;

    std::cout << "Enter a number followed by enter. Repeat until you're satisfied then enter 0: ";  
    int sum = 0;
    do
    {
        std::cin >> ch;
        sum += ch;
        std::cout << "Sum = " << sum << std::endl;
    }
    while (ch != 0);

return 0;
}




