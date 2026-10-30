#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    char o; ll p;

    vector<ll> pos(n);

    for (int i = 0; i < n; i++){
        cin >> o >> p;
        pos[i] = (o == 'G' ) ? p : -p;
    }

    ll ans = n;
    for (int i=0; i<n; i++){
        ll res = 0;
        ll x = pos[i];
        for (int j=0; j<n; j++){
            if (pos[j] < 0 && x > abs(pos[j])) res++;
            if (pos[j] > 0 && x < abs(pos[j])) res++;
        }
        ans = min(ans,res);
    }
    cout << ans << '\n';

    return 0;
}