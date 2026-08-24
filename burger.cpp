#include <iostream>
#include <algorithm>

int main(){
    int t;
    std::cin >> t;
    for (int i=0; i<t; i++){
        int b,p,f;
        int h,c;
        std::cin>> b >> p >> f >> h >> c;
        int cost = 0;

        if (c > h){
            int ncb = std::min(b / 2, f);
            int rest_b = b - 2 * ncb;
            int nhb = std::min(rest_b / 2, p);
            cost = nhb * h + ncb * c;
        }
        else{
            int nhb = std::min(b / 2, p);
            int rest_b = b - 2 * nhb;
            int ncb = std::min(rest_b / 2, f);
            cost = nhb * h + ncb * c;
        }
        std::cout << cost << '\n';
    }
}