#include <iostream>

int main()
{
    std::cout << "Enter two integers: ";
    int i = 0;
    std::cin >> i;
    int j = 0;
    std::cin >> j;

    int sum = 0;

    for (int index = i; index <= j; index++)
        sum += index;

    std::cout << sum << std::endl;
}





