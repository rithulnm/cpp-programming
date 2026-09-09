#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        bool found = false;

        while (x > 0) {
            if (x % 33 == 0) {
                found = true;
                break;
            }

            string s = to_string(x);
            int pos = s.find("33");

            if (pos != string::npos) {
                s.erase(pos, 2);

                if (s.empty())
                    x = 0;
                else
                    x = stoll(s);
            }
            else {
                x -= 33;
            }
        }

        if (found || x == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}