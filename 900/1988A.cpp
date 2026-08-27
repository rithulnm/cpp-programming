#include <iostream>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n,k;
        std::cin >> n >> k;

        int i=0;
        while ((1+i*(k-1)) < n){
            i++;
        }

        std::cout << i << '\n';
    }
}