#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        ll n, x;
        cin >> n >> x;

        vector<ll> v(n);
        for(auto &i : v) cin >> i;

        sort(v.begin(), v.end());

        ll ans = 0;
        ll team = 0;

        for(int i = n - 1; i >= 0; i--){
            team++;

            if(v[i] * team >= x){
                ans++;
                team = 0;
            }
        }

        cout << ans << '\n';
    }
}