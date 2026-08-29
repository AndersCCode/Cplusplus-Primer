#include <iostream>
#include "Sales_item.h"

int main(void) {
    Sales_item item1, item2, item3, item4, item5;

    std::cin >> item1 >> item2 >> item3 >> item4 >> item5;
    std::cout << item1 + item2 + item3 + item4 + item5 << std::endl;
    
    return 0;
}