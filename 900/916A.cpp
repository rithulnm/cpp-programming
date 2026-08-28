#include <iostream>

bool hasSeven(int n){
    while (n > 0){
        if (n%10==7){
            return true;
        }
        n /= 10;
    }
    return false;
}

int main(){
    int x,hh,mm;
    std::cin >> x;
    std::cin >> hh >> mm;
    int h = hh;
    int m = mm;
    int ti = h*60 + m;

    while(true){
        if (mm <= 0){
            mm += 60;
            hh --;
        }
        if (hasSeven(hh) || hasSeven(mm)){
            break;
        }
        mm = mm - x;
    }
    int tf = (hh*60) + mm;
    std::cout << (tf-ti)/(60*x) << '\n';

}