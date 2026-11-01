#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    
    vector <ll> v(n);
    for(auto& x : v){
        cin >> x;
    }
    sort(v.begin(), v.end());

    ll cost = 0;
    for(int i=0; i<n; i++){
        cost+= abs(v[i] - v[n/2]);
    }
    ll ops = v[n-1] - v[0];

    cout << cost << ' ' << ops << '\n';

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}