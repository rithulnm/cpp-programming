#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> x(n),y(n);

    for (auto &i : x) cin >> i;
    for (auto &i : y) cin >> i;

    ll ans = 0;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            int x0 = x[i]; int y0 = y[i];
            int X = x[j]; int Y = y[j];
            ll d = abs(pow(x0-X,2)+pow(y0-Y,2));

            ans = max(ans,d);
        }
    }

    cout << ans << '\n';

    
} 