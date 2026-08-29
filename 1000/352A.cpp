#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int f = 0;
    int z = 0;

    for (int i=0; i<n; i++){
        int a;
        std::cin >> a;

        if (a == 5){
            f++;
        }
        else{
            z++;
        }
    }

    while ((5*f)%9 != 0){
        f--;
    }
    if (f == 0){
        if (z > 0){
            std::cout << 0 ;
        }
        else{
            std::cout << -1;
        }
    }
    else if (z==0){
        std::cout << -1 ;
    }
    else{
        while(f--){
            std::cout << 5 ;
        }
        while(z--){
            std::cout << 0;
        }
    }
    std::cout << '\n';
}