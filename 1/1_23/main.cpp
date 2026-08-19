#include <iostream>
#include "Sales_item.h"

int main(void) {
    Sales_item current_item, next_item;

    std::cin >> current_item;
    int count = 1;
        
        while (std::cin >> next_item) { 
            if (current_item.isbn() == next_item.isbn())
                count++;
            else {
                std::cout << current_item.isbn() << " occurs " << count << " times" << std::endl;
                current_item = next_item;
                count = 1;
            }
        }
        std::cout << current_item.isbn() << " occurs " << count << " times" << std::endl;   // last item 
    return 0;
}
