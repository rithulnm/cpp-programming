#include <iostream>

int main(){
    int y,b,r;
    std::cin >> y >> b >> r;
    int lim = std::min(y,std::min(b,r));
    int sum = 0;
    while (true){
        if (y+1 <= b && y+2 <= r){
            sum = 3*(y+1);
            break;
        }
        else{
            y -=1;
        }  
    }
    std::cout << sum ;
}