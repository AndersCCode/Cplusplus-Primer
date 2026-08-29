#include <iostream>

int main() {
    
    std::cout << "/*";                      // Legal
    std::cout << "*/";                      // Legal
    std::cout << /* "*/" */";               // Not legal. Comment ends after first */ Add a " as last character 
    std::cout << /*  "*/" /*  "/*" */;      // Legal
    
    return 0;
}