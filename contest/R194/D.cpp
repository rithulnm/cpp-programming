#include <iostream>
#include <string>
using namespace std;

int main() {
    int qrTNum;
    cin >> qrTNum;

    while (qrTNum--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool impossible = false;
        for (int i = 1; i < n; i++) {
            if (s[i] == '0' && s[i - 1] == '0') {
                impossible = true;
                break;
            }
        }

        if (impossible) {
            cout << -1 << '\n';
            continue;
        }

        bool change = false;
        bool cost1 = true;

        char last = 0;

        for (char c : s) {
            if (c == '0') continue;

            if (last != 0 && last != c) {
                change = true;
                cost1 = false;
            }

            last = c;
        }

        if (cost1) {
            cout << 1 << '\n';
            continue;
        }

        int ans = 2;

        for (int i = 1; i < n - 1; ) {
            if (s[i] == '0') {
                i++;
                continue;
            }

            int j = i;
            while (j < n && s[j] == s[i]) {
                j++;
            }

            if (j < n && s[j] != '0') {
                int len = j - i;

                int k = j;
                while (k < n && s[k] == s[j]) {
                    k++;
                }

                if (len % 2 == 0) {
                    ans = 3;
                    break;
                }

                i = j;
            } else {
                break;
            }
        }

        cout << ans << '\n';
    }
}
