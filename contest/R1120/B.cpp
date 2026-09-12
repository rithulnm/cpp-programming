#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[200002];
        int ans[200002];
        int diff[200003] = {0};
        int c = 0;

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        for (int k = 1; k <= n; k++) {
            int begin = a[k] * k;
            int end = begin + k - 1;

            if (begin >= n)
                continue;

            if (end >= n)
                end = n - 1;

            diff[begin]++;
            diff[end + 1]--;
        }

        int found = 0;

        for (int x = 0; x < n; x++) {
            found += diff[x];

            if (found == 0) {
                ans[c] = x;
                c++;
            }
        }

        cout << c << '\n';

        for (int i = 0; i < c; i++) {
            cout << ans[i] << " ";
        }

        cout << '\n';
    }

    return 0;
}