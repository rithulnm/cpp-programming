#include <iostream>

int main(){
    int k, w;
    long long n;
    std::cin >> k >> n >> w;
    long long cost = 0;
    for (int i=1; i<w+1; i++){
        cost = cost + (i*k);
    }

    long long diff = cost - n;
    std::cout << (diff > 0 ? diff : 0);

}