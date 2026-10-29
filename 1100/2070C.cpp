#include <bits/stdc++.h>

using namespace std;
using ll = long long; 

void solve(){
    ll n, x, k;
    cin >> n >> x >> k;

    string s;
    cin >> s;

    ll t1 = -1;
    ll pos = x;

    for(int i=0; i<n; i++){
        if (s[i] == 'L') pos--;
        else pos++;

        if (pos == 0){
            t1 = i+1;
            break;
        }
    }

    if (t1 == -1 || t1 > k){
        cout << 0 << '\n';
        return;
    }

    ll t2 = -1;
    pos = 0;
    for(int i=0; i<n; i++){
        if (s[i] == 'L') pos--;
        else pos++;

        if (pos == 0){
            t2 = i+1;
            break;
        }
    }

    if (t2 == -1){
        cout << 1 << '\n';
        return;
    }

    ll ans = 1 + (k-t1)/t2;
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;

}