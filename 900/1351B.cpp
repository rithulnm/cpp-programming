#include <iostream>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int a1, b1, a2, b2;
        std::cin >> a1 >> b1;
        std::cin >> a2 >> b2;

        bool pos = false;
        if (std::max(a1,b1) == std::max(a2,b2)){
            if ((std::min(a1,b1)+std::min(a2,b2))==std::max(a1,b1)){
                pos = true;
            }
            else{
                pos = false;
            }
        }
        else{
            pos = false;
        }

        if (pos){
            std::cout << "YES\n";
        }
        else{
            std::cout << "NO\n";
        }
    }
}