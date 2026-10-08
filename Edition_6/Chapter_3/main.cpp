#include <iostream>
#include <limits>
#include <typeinfo>
#include <boost/type_index.hpp>

int main() {

    unsigned int test;
    wchar_t c = L'P';
    char c2 = L'P';
    
    std::cout << "unsigned int = " << sizeof(test) << " bytes" << std::endl;
    std::cout << "wchar_t = " << sizeof(c) << " bytes" << std::endl;
    std::cout << "char = " << sizeof(c2) << " bytes" << std::endl;

    std::cout << c << std::endl;
    std::cout << c2 << std::endl;

    std::cout << "int min = "<< std::numeric_limits<int>::min() << std::endl;
    std::cout << "int max = "<< std::numeric_limits<int>::max() << std::endl;

    std::cout << "long int min = "<< std::numeric_limits<long>::min() << std::endl;
    std::cout << "long int max = "<< std::numeric_limits<long>::max() << std::endl;

    std::cout << "double min = "<< std::numeric_limits<double>::min() << std::endl;
    std::cout << "double max = "<< std::numeric_limits<double>::max() << std::endl;


    char d = 88;
    std::cout << d << std::endl;

    std::cout << static_cast<char>(88) << std::endl;

    //int e;
    //std::cin >> e;

    std::cout.put(88) << std::endl;

    std::cout << "float precision bits: " << std::numeric_limits<float>::digits << "\n";
    std::cout << "double precision bits: " << std::numeric_limits<double>::digits << "\n";
    std::cout << "long double precision bits: " << std::numeric_limits<long double>::digits << "\n\n";

    std::cout << "float exact decimal digits: " << std::numeric_limits<float>::digits10 << "\n";
    std::cout << "double exact decimal digits: " << std::numeric_limits<double>::digits10 << "\n";
    std::cout << "long double exact decimal digits: " << std::numeric_limits<long double>::digits10 << "\n\n";
    
    double x1 = 1;
    double x2 = 2;
    int y = 0;
    int result = 0;

    y = static_cast<int>(x1) + static_cast<int>(x2);
    std::cout << "y = " << y << " type = " << typeid(y).name() << std::endl;
    std::cout << " type = " << typeid(y).name() << std::endl;
    std::cout << " type = " << boost::typeindex::type_id_with_cvr<decltype(y)>().pretty_name() << std::endl << std::endl;
    
    result = static_cast<int>(x1 + x2);
    std::cout << "result = " << result << " type = " << typeid(result).name() << std::endl;
    std::cout << " type = " << typeid(result).name() << std::endl;
    std::cout << " type = " << boost::typeindex::type_id_with_cvr<decltype(result)>().pretty_name() << std::endl;
    
    return 0;
}