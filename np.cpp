#include <iostream>

int main(){
    int t;
    std::cin >> t;

    while (t--) {
        long long a, b, n;
        std::cin >> a >> b >> n;

        int i = 0;
        while (a <= n && b <= n) {
            if (a < b) a += b;
            else b += a;
            i++;
        }

        std::cout << i << '\n';
    }
}