#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
        }

        int available = 10 - n;
        int ans = 6 * available * (available - 1) / 2;

        cout << ans << '\n';
    }

    return 0;
}