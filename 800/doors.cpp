#include <iostream>

int main(){
    int t;
    std::cin >> t;
    while (t--){
        int x;
        std::cin >> x;
        int a,b,c;
        int arr[3];
        for (int i=0; i<3; i++){
            int a;
            std::cin >> a;
            arr[i] = a;
        }
        bool pos = false;
        for (int i=0; i<2; i++){
            if (arr[x-1]==0){
                pos = false;
                break;
            }
            else{
                x = arr[x-1];
                pos = true;
            }
        }

        if (pos){
            std::cout << "YES" <<'\n';
        }
        else{
            std::cout << "NO" <<'\n';
        }


    }
}