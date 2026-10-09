#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> a(n + 2), b(n + 2);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];

        vector<ll> p(n + 2, 0), s(n + 2, 0);

        for (int e = 1; e < n; e++){
            bool vm = (a[e] == b[e]);       
            bool zm   = (b[e] == a[e + 1]); 
            p[e + 1] = p[e] + vm + zm;
        }

        s[n] = (a[n] == b[n]);                       
        for (int e = n - 1; e >= 1; e--){
            bool d1 = (a[e] == b[e + 1]);     
            bool d2 = (a[e + 1] == b[e]);     
            s[e] = s[e + 1] + d1 + d2;
        }
        ll best = 0;
        for (int e = 1; e <= n; e++){
            best = max(best, p[e] + s[e]);
        }

        ll ans = 2 * n - 1 + best;
        cout << ans << '\n';
    }
    return 0;
}