#include <iostream>

int main(){
    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;
        int* arr = new int[n];

        for (int i=0; i<n; i++){
            int a;
            std::cin >> a;
            arr[i] = a;
        }
        int k=-1;
        bool found = false;
        for(int i=1; i<n; i++){
            int r = 0; int s = 0;
            for(int j=0; j<i; j++){
                if (arr[j]==2){
                    r++;
                }
            }
            for(int j=i; j<n; j++){
                if (arr[j]==2){
                    s++;
                }
            }

            if (r==s){
                k = i;
                found = true;
                break;
            }
        }
        std::cout << k << '\n';
    }
}