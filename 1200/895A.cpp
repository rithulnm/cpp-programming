
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 360;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = 0; j < n; j++) {
            sum += a[(i + j) % n];
            ans = min(ans, abs(2 * sum - 360));
        }
    }

    cout << ans << '\n';
    return 0;
}
