#include <iostream>

int main(){
    int t,n;
    std::cin >> t;
    while(t--){
        int sum=0;
        std::cin >> n;
        for(int i=0; i<n; i++){
            int a;
            std::cin >> a;
            sum = (i%2==0) ? sum + a :sum -a ;
        }

        std::cout << sum << '\n';
    }
}