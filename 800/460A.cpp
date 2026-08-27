#include <iostream>

int main(){
    int n,m;
    std::cin >> n >> m;
    int day = 0;
    while (n){
        day++;
        n--;
        if (day%m == 0){
            n++;
        }
    }
    std::cout << day;
}