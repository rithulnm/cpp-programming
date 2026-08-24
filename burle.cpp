#include <iostream>

int main(){
    int k,r;
    std::cin >> k >> r;

    int i=1;
    while (true){
        if ((k*i)%10==0){
            break;
        }
        if ((k*i - r)%10==0){
            break;
        }
        i++;
    }
    std::cout << i ;
}