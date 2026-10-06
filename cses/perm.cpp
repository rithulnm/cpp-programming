#include <iostream>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;

    long long k=2;
    if (n == 1) {
        cout << 1;
    }
    else if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
    }
    else {
        int k = 2;

        for (int i = 0; i < n; i++) {
            cout << k << " ";

            if (k + 2 <= n)
                k += 2;
            else
                k = 1;
        }
    }
}
