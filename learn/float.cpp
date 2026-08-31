#include <iostream>
#include <limits>
#include <iomanip>

//to see if IEEE 754 is compatible
int main()
{
    std::cout << std::left;
    std::cout << std::boolalpha; // print bool as true or false rather than 1 or 0
    std::cout << "float: " << std::setw(16) << std::numeric_limits<float>::is_iec559 << '\n';
    std::cout << "double: " << std::setw(16) << std::numeric_limits<double>::is_iec559 << '\n';
    std::cout << "long double: " << std::setw(16) << std::numeric_limits<long double>::is_iec559 << '\n';

    std::cout << 5.0 << '\n';
	std::cout << 6.7f << '\n';
	std::cout << 9876543.21 << '\n';
}