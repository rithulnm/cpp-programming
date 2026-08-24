#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (a >= b){
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;

        }
        return a;
    }
}

int main() {
    int t;
    cin >> t;

    for(int m=0; m<t; m++) {
        int n;
        cin >> n;

        long long* arr = new long long[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long x = 2;

        while (x != 1000000000000000000){
            bool flag = false;
            for (int i = 0; i<n; i++){
                if (gcd(arr[i],x) == 1){
                    flag = true;
                    break;
                }
            }

            if (flag == true){
                std::cout << x << '\n';
                break;
            }

            x++;
        }

        if (x == 1000000000000000000){
            std::cout << -1 << '\n';
        }
    }
}
