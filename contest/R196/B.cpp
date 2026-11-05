#include <bits/stdc++.h>

using namespace std;
using ll = long long; 

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a) cin >> x;

        int best = 0;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (a[j] % a[i] == 0) cnt++;
            }
            if (cnt > best) best = cnt;
        }

        cout << n - best << "\n";
    }
    return 0;
}