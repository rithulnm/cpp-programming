#include <iostream>
#include <algorithm>

int main(){
    int k2,k3,k5,k6;
    std::cin >>k2 >>k3 >>k5 >>k6;

    int n256 = std::min(k2, std::min(k5,k6));
    int remaining_k2 = k2 - n256;
    int n32 = std::min(remaining_k2, k3);
    int sum = 256*n256 + 32*n32;

    std::cout <<sum;
}