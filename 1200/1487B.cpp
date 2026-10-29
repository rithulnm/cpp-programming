#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    ll n, k;
    cin >> n >> k;

    ll s = (n%2 == 0) ? 0: (k-1)/((n-1)/2);
    ll ans = (k-1+s)%n + 1;
    cout << ans << '\n';
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while(t--){
        solve();
    }

    return 0;
}