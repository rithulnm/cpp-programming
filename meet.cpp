#include <iostream>

int main(){
    int x,y;
    std::cin >> x >> y;
    int s = (x+y);

    int z = s%2 == 0? s/2 : s/2+1;
    int nx = (x>y) ? x - z: z -x;
    int ny = (x>y) ? z - y: y - z;
    int sum = (nx*(nx+1))/2 + (ny*(ny+1))/2;

    std::cout << sum;
}