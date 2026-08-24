#include <iostream>
#include <algorithm>

int main(){
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++){
        int overall_lo = -1000000000;
        int overall_hi = 1000000000;
        int n;
        std::cin >> n;
        int arr[104];

        for (int j = 1; j < n + 1; j++){
            std::cin >> arr[j];
        }

        if (n % 2 != 0){
            std::cout << "NO" << '\n';
            continue;
        }

        bool possible = true;
        for (int m = 1; m < n + 1; m = m + 2){
            if (arr[m] <= arr[m+1]){
                possible = false;
                break;
            }
            overall_lo = std::max(overall_lo, arr[m+1]);
            overall_hi = std::min(overall_hi, arr[m]);
        }

        if (!possible){
            std::cout << "NO" << '\n';
            continue;
        }

        if (overall_hi - overall_lo > 1){
            std::cout << "YES" << '\n';
        }
        else {
            std::cout << "NO" << '\n';
        }
    }
}