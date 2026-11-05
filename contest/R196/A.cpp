#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int total = r - l + 1;
        int k;

        if (l > 0 || r < 0) {
            k = 1;
        }
        else if (l == -r) {
            k = total;
        }
        else if (-l < r) {
            k = (-l - l + 1) + 1;
        }
        else {
            k = (r + r + 1) + 1;
        }

        cout << total - k << "\n";
    }
    return 0;
}