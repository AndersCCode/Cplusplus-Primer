#include <iostream>
#include <array>

int main()
{
    // float data[3] = {0};         // old way
    std::array<float, 3> data{};
    
    std::cout << "Picture a 100 m run." << std::endl;
    std::cout << "Enter time 1: ";
    std::cin >> data[0];

    std::cout << "Enter time 2: ";
    std::cin >> data[1];

    std::cout << "Enter time 3: ";
    std::cin >> data[2];

    std::cout << "Time 1: " << data[0] << std::endl;   
    std::cout << "Time 2: " << data[1] << std::endl;
    std::cout << "Time 3: " << data[2] << std::endl;
    std::cout << "Average: " << (data[0] + data[1] + data[2]) / 3 << std::endl;

return 0;
}