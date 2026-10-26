#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    std::uint8_t c { 0b00001111 };

    std::cout << std::bitset<32>(~c) << '\n';     // incorrect: prints 11111111111111111111111111110000
    std::cout << std::bitset<32>(c << 6) << '\n'; // incorrect: prints 0000000000000000001111000000
    //std::uint8_t cneg { ~c };                     // error: narrowing conversion from unsigned int to std::uint8_t
    c = ~c;                                       // possible warning: narrowing conversion from unsigned int to std::uint8_t

    return 0;
}