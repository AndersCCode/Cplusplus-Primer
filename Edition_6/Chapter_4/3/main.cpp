#include <iostream>
#include <cstring>

int main()
{
    std::cout << "Enter your first name: ";
    char firstName[20];
    std::cin.getline(firstName, 20);
    
    std::cout << "Enter your last name: ";
    char lastName[20];
    std::cin.getline(lastName, 20);
    
    char output[100];
    strcpy(output, lastName);
    strcat(output, ", ");
    strcat(output, firstName);
    
    std::cout << "Here is the information in a single string: " << output << std::endl;
    
return 0;
}