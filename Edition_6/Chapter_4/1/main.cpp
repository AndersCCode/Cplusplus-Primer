#include <iostream>

int main()
{
    std::cout << "What is your first name ? ";
    char firstName[20];
    std::cin.getline(firstName, 20);
    
    std::cout << "What is your last name ? ";
    char lastName[20];
    std::cin.getline(lastName, 20);
    
    std::cout << "Enter a number between 0 and 7: ";
    enum color {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
    const std::string colorNames[] = {"red", "orange", "yellow", "green", "blue", "violet", "indigo", "ultraviolet"};
    unsigned int choice;
    std::cin >> choice;
    color chosenColor = static_cast<color>(choice);
    
    std::cout << "Enter your age: ";
    unsigned int age;
    std::cin >> age;
    std::cin.get();         // To dispose the newline character
    
    std::cout << "Enter a random text ";
    char randomText[20];
    std::cin.getline(randomText, 20);
    
    std::cout << "Name: " << firstName << ", " << lastName << std::endl;
    std::cout << "Color: " << colorNames[chosenColor] << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Random text: " << randomText << std::endl;

return 0;
}