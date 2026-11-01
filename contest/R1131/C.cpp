#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    ll sum = 0;
    bool abig = false, ibig = false;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        if (a[i] >= 2){
            abig = true;
            if (i != 0 && i != n-1) ibig = true;
        }
    }

    if (!abig) cout << -1 << '\n';
    else if (ibig) cout << sum - 1 << '\n';
    else cout << sum - (n - 1) << '\n';
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}