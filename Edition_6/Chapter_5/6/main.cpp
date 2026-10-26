#include <iostream>

const int Years = 3;

int main()
{
    std::string months[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};

    int sales[Years][12] = {};
    int totalPeriod = 0;
    
    for (int year = 0; year < Years; year++)
    {
        int totalYear = 0;

        for (int month = 0; month < 12; month++)
        {
            std::cout << "Enter sales for year " << year + 1 << " " << months[month] << ": ";
            std::cin >> sales[year][month];
            totalYear += sales[year][month];
            totalPeriod += sales[year][month];
        }
        std::cout << "Total sales for year " << year + 1 << ": " << totalYear << std::endl;
    }

    std::cout << "Total sales for the period " << ": " << totalPeriod << std::endl;

return 0;
}