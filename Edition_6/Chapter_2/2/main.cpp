#include <iostream>

int main() {
    
    std::cout << "How long is the distance in Furlong ?";
    int distance;
    std::cin >> distance;
    std::cout << std::endl << "The distance is equivalent to " << distance * 220 << " yards." << std::endl;
    
    return 0;
}