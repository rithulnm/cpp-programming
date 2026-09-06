#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int odd = 0;
        int even0 = 0;
        int even2 = 0;

        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;

            if (a % 2 == 1)
                odd++;
            else if (a % 4 == 0)
                even0++;
            else
                even2++;
        }

        cout << max({odd, even0, even2}) << '\n';
    }
}