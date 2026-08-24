#include <iostream>

int main(){
    int t;
    std::cin >> t;

    for (int i=0; i<t; i++){
        int n;
        std::cin >> n;

        int maxc = 0;
        int cost = 0;
        for (int r=1;r<n+1;r++){
            for (int c=1;c<n+1;c++){
                cost = (r-1)*n + c;
                if(r > 1){cost += (r-2)*n+c;}
                if(c < n){cost += (r-1)*n+c+1;}
                if(r < n){cost += (r*n)+c;}
                if(c > 1){cost += (r-1)*n + c -1;}

                if(maxc < cost){maxc = cost;}
            }
        }

        std::cout<<maxc<< '\n';

    }

}