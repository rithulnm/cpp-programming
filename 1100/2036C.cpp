#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;

    string target = "1100";

    while(t--){
        string s; cin >> s;
        int q; cin >> q;

        int n = s.length();
        int count = 0;

        if (n >= 4) {
            for (int j = 0; j <= n - 4; j++) {
                if (s[j] == '1' && s[j+1] == '1' && s[j+2] == '0' && s[j+3] == '0') {
                    count++;
                }
            }
        }

        

        while(q--){
            int i;
            char v;
            cin >> i >> v;
            i--;

            if (s[i] == v){
                if (count > 0) cout << "YES\n";
                else cout << "NO\n";
                continue;
            }

            for (int start = i - 3; start <= i; start++) {
                if (start >= 0 && start + 3 < n) {
                    if (s[start] == '1' && s[start+1] == '1' && s[start+2] == '0' && s[start+3] == '0') {
                        count--;
                    }
                }
            }

            s[i] = v;

            for (int start = i - 3; start <= i; start++) {
                if (start >= 0 && start + 3 < n) {
                    if (s[start] == '1' && s[start+1] == '1' && s[start+2] == '0' && s[start+3] == '0') {
                        count++;
                    }
                }
            }

            if (count > 0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }

        }
    }
}