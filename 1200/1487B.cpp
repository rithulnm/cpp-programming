#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    ll n, k;
    ll ans;
    cin >> n >> k;

    if (n%2 == 0){
        ans = k;
        return;
    }
    else{
        ans  = k%((n+1)/2);
    }
    
}

int main(){
    /*ios::sync_with_stdio(false);
    cin.tie(NULL);*/

    int t;
    cin >> t;
    
    while(t--){
        solve();
    }

    return 0;
}