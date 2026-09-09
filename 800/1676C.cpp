#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string s[50];

        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        int ans = 1000000;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int diff = 0;

                for (int k = 0; k < m; k++) {
                    diff += abs(s[i][k] - s[j][k]);
                }

                if (diff < ans) {
                    ans = diff;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}