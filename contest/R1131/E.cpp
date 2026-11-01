#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<ll> odd, even;
    ll sum = 0;
    for (int i = 0; i < n; i++){
        ll x; cin >> x;
        sum += x;
        if (i % 2 == 0) odd.push_back(x);
        else even.push_back(x);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    int m = min(odd.size(), even.size());
    for (int k = 0; k < m; k++){
        if (odd[k] + even[k] < 0) sum -= 2 * (odd[k] + even[k]);

    }
    cout << sum << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}