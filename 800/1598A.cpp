#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        bool pos = true;

        for (int i = 0; i < n; i++) {
            if (a[i] == '1' && b[i] == '1') {
                pos = false;
                break;
            }
        }

        cout << (pos ? "YES\n" : "NO\n");
    }

    return 0;
}
