#include <iostream>
#include <numeric>

int main(){
    long long n,m,z;
    std::cin >> n >> m >> z;

    std::cout << z/(std::lcm(n,m)) ;
}