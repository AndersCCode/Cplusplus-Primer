#include <iostream>

int main()
{
    //const char * months[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};

    std::string months[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};

    int sales[12] = {};
    int total = 0;

    for (int month = 0; month < 12; month++)
    {
        std::cout << "Enter sales for " << months[month] << ": ";
        std::cin >> sales[month];
        total += sales[month];
    }
    
    std::cout << "Total sales for the year: " << total << std::endl;

return 0;
}