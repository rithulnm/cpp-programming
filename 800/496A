#include <iostream>
#include <algorithm>

int main(){
    int n;
    std::cin >> n;
    int arr[105];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    int best = 1000000;

    for (int i = 1; i<n-1; i++){
        int maxGap = 0;

        for (int j = 0; j < n - 1; j++){
            int a, b;
            if (j == i - 1){
                a = arr[i-1];
                b = arr[i+1];
            }
            else if (j == i){
                continue;
            }
            else{
                a = arr[j];
                b = arr[j+1];
            }
            maxGap = std::max(maxGap, b - a);
        }

        best = std::min(best, maxGap);
    }

    std::cout << best;
}