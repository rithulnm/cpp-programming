#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector <ll> v(n);
    ll sum = 0;
    for(auto& x: v){
        cin >> x;
        sum+=x;
    }

    ll ans = 0;

    for (int k = n; k >= 1; k--) {
        if (sum % k != 0) continue;

        ll target = sum / k;

        ll temp_s = 0;
        int groups = 0;
        for (int i=0; i<n; i++){
            temp_s += v[i];
            if (temp_s == target){
                temp_s = 0;
                groups++;
            }
        }

        if (groups == k){
            ans = n - k;
            break;
        }
    }

    cout << ans << '\n';

}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}