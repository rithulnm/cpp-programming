#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    const ll MOD = 1e9 + 7;
    ll ans = 1;
    for (ll i = 0; i < n; i++) {
        ans = (ans * 2) % MOD;
    }

    cout << ans << '\n';
}