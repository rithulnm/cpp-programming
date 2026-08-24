#include <iostream>
#include <algorithm>

int main(){
    int t;
    std::cin >> t;

    while (t--){
        int x;
        int arr[4];
        arr[0]= 1001;
        arr[1]= 1001;
        arr[2]= 1001;
        arr[3]= 1001;
        int i = 0;
        std:: cin >> x;

        while (x != 0){
            arr[i] = x%10;
            x = x/10;
            i++;
        }

        int n = sizeof(arr) / sizeof(arr[0]);
        std::sort(arr, arr + n);

        std::cout << arr[0] <<'\n';
    }

}