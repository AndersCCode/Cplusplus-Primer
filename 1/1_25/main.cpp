#include <iostream>
#include "Sales_item.h"

int main(void) {
    Sales_item total;                                   // first item

    if (std::cin >> total) {
        Sales_item transaction;                         // next item

        while (std::cin >> transaction) {
            if (total.isbn() == transaction.isbn())
                total += transaction;
            else {
                std::cout << total << std::endl;
                total = transaction;                    // Overwrite previous item by transferring current
            }
        }
        std::cout << total << std::endl;
    }
    else {
        std::cerr << "Error, no input" << std::endl;    // last item
    }
    return 0;
}
